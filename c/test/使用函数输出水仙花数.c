#include <stdio.h>
#include<math.h>
int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
void PrintN( int m, int n )
{
  int i;
  for(i=m+1;i<n;i++)
  if(narcissistic(i)==1)
  printf("%d\n",i);
}
int narcissistic( int number )
{
	int i,n,sum=0,m=0,a=1,b;
	n=number;
	while(n)
	{
		n/=10;
		m++;
	}
	n=number;
	while(n)
	{
		a=1;
		b=n%10;
		for(i=1;i<=m;i++)a*=b;
		n/=10;
		sum+=a;
	}
	if(sum==number)return 1;
	else return 0;
}

