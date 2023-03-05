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
int factorsum( int number )
{
	int n,m,i,sum;
	for(m;m<=n;m++)
	{
		for(i=1;i<m;i++)
		{
			if(m%i==0)
			sum=sum+i;
		}
	}if(m==sum)
	return sum;
}
int factorsuml( int number )
{
	int n,m,i,sum;
	for(m;m<=n;m++)
	{
		for(i=1;i<m;i++)
		{
			if(m%i==0)
			sum=sum+i;
		}
	}if(m==sum)
	return i;
}
void PrintPN( int m, int n )
{
	int j=0;
	int i;
	int b[1000];
	for(m;m<=n;m++)
	{
		if(factorsum(m)==m)
		{
			for(i=1;i<m;i++)
			{
				if(m%i==0){
					b[j]=i;
					j++;
				}printf("%d= ",m);
				for(j=0;j<factorsum1(m);j++)
				printf("%d+",j);
				printf("%d\n");
			}
		}
	}
}
