#include <stdio.h>
int main()
{
int M;
scanf("%d",&M);//输入二维数组的行列数
int a[M][M],i,j,j1,o,sum1=0,sum2=0,sum3=0,sum4=0;
printf("输入数组:\n");//依次输入数组元素
for(i=0;i<M;i++)
for(j=0;j<M;j++)
{
printf("a[%d][%d]= ",i,j);
scanf("%d",&a[i][j]);
}
for(i=0;i<M;i++)
{
	sum1+=a[i][i];
	sum2+=a[i][M-i-1];
	sum3+=a[1][i];
	sum4+=a[2][i];
}
printf("sum1= %d\n",sum1);
printf("sum2= %d\n",sum2);
printf("sum3= %d\n",sum3);
printf("sum4= %d\n",sum4);
}
