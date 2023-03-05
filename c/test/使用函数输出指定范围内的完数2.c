#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum( int number ){
	int a[N],i,j=0,n=0,sum=0;
 
	if(number == 1)
		return 1;
 
	for(i=1;i<number;i++)
		if(number%i==0){
			a[j++]=i;
		}
 
	for(i=0;i<j;i++)
		sum+=a[i];
 
	if(sum == number)
		return 1;
	return 0;
}
void PrintPN( int m, int n ){
	int i,j,k=0,l,a[N];
	if(m==1){
		printf("%d = %d\n",m , m);
		m+=1;
	}
 
	for(i=m;i<=n;i++){
		if(factorsum(i)==1){
			for(j=1;j<i;j++){
				if(i%j==0){
					a[k++]=j;
				}
			}
			printf("%d = ", i);
			for(l=0;l<k-1;l++)
				printf("%d + ", a[l]);
			printf("%d\n", a[l]);
			k=0;
		}
	}	

