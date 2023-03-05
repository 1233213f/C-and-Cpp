! A fortran95 program for G95
! By WQY
program main ! calculate ccf curve
!(先要处理好数据,即去背景、噪声并且拟合)
IMPLICIT NONE
INTEGER N,L,k,M1,M2,I,j,im
parameter(N=2000,L=40)
!character(len=15)!dimension(1:10):: fname
real X(N),F1(N),F2(N),F3(N),F4(N),FT(N),dF1(N),dF2(N),dF3(N),dF4(N),dFT(N),tl(N),ccf21(N),ccf32(N),ccf31(N)
REAL TOTALA,TOTALB,SIGMAA,SIGMAB,TSTEP
REAL max21,max31,max32,tl_m1,tl_m2,tl_m3
!real tr1,td1,tr2,td2,tr,td,HR31,sigtal,sigtalr,sigFWHM,sigtrtd
!character filename*5

open(12,file="C:\Users\28590\Desktop\seeklag\170903.txt",STATUS='old')
!读入某一个暴的数据（经过去背景、去燥声、拟和过程）

im=0
do i=1,N
if(im==0)then
READ(12,*,iostat=im) X(I),F1(I),dF1(I),F2(I),dF2(I),F3(I),dF3(I),F4(I),dF4(I),FT(I),dFT(I)
!PRINT*, X(I),F1(I),dF1(I),F2(I),dF2(I),F3(I),dF3(I),F4(I),dF4(I),FT(I),dFT(I)

endif
ENDDO
!pause
close(12)
 OPEN(13,FILE="C:\Users\28590\Desktop\seeklago\170903v.dat",STATUS="REPLACE")
 WRITE(13,*)'TL     ','ccf21    ','ccf31     ','ccf32     '
!对短暴采用5ms分辨率，而求长暴的lags时采用64ms的时间分辨率
!l=20 !!!! change
tstep=1.0! in unit of seconds
 do k=-L,L,1
m1=max(1,1-k)
m2=min(n,n-k)
!**** cal the time lag from Ch1 to Ch2 below****
    ccf21(k)=0.0
        do i=m1,m2,1
        ccf21(k)=ccf21(k)+F2(i)*F1(i+k)
 !       print*, i,k,ccf21,F2(i),F1(i+k)
 ! pause
        enddo

        totalB=0.0
        totalA=0.0
        do j=1,n
        totalB=totalB+F2(j)**2.0
        totalA=totalA+F1(j+k)**2.0
        enddo
     sigmaB=(totalB/n)**0.5
     sigmaA=(totalA/n)**0.5
     ccf21(k)=(ccf21(k)/n)/(sigmaB*sigmaA)!!ref to eq(1) in Band 1997 ApJ
!**** cal the time lag from Ch1 to Ch3 below****
    ccf31(k)=0.0
        do i=m1,m2,1
        ccf31(k)=ccf31(k)+F3(i)*F1(i+k)
        enddo

        totalB=0.0
        totalA=0.0
        do j=1,n
        totalB=totalB+F3(j)**2.0
        totalA=totalA+F1(j+k)**2.0
        enddo
     sigmaB=(totalB/n)**0.5
     sigmaA=(totalA/n)**0.5

     ccf31(k)=(ccf31(k)/n)/(sigmaB*sigmaA)!!ref to eq(1) in Band 1997 ApJ

!**** cal the time lag from Ch2 to Ch3 below****
    ccf32(k)=0.0
        do i=m1,m2,1
        ccf32(k)=ccf32(k)+F3(i)*F2(i+k)
        enddo

        totalB=0.0
        totalA=0.0
        do j=1,n
        totalB=totalB+F3(j)**2.0
        totalA=totalA+F2(j+k)**2.0
        enddo
     sigmaB=(totalB/n)**0.5
     sigmaA=(totalA/n)**0.5

     ccf32(k)=(ccf32(k)/n)/(sigmaB*sigmaA) !!ref to eq(1) in Band 1997 ApJ
     tl(k)=k*tstep

If (max21<=ccf21(k))then
    max21=ccf21(k)
    tl_m1=tl(k)
End If
If (max31<=ccf31(k))then
    max31=ccf31(k)
    tl_m2=tl(k)
End If
If (max32<=ccf32(k))then
    max32=ccf32(k)
    tl_m3=tl(k)
End If
 PRINT*,max21,max31,max32
     pause
  WRITE(13,*)tl(k),ccf21(k),ccf31(k),ccf32(k)
 ! write(*,*) tl_m1,max21
 ! write(*,*) tl_m2,max31
  ! write(*,*) tl_m3,max32

  enddo
 !pause

!write(*,*) "the lag is ",lag,"kk",kk

CLOSE(13)

END

