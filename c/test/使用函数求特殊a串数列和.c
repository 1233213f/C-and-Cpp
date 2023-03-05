#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    

    return 0;
}

/* 你的代码将被嵌在这里 */
int fn( int a, int n )
{
	int h=0;
//	int j=0;
//	int b[j];
	int i;
	for(i=1;i<=n;i++)
	{
		h=h*10+a;
//		b[j]=h;
//		printf("%d\n",h);
//		j++;
	}return h;
}
int SumA( int a, int n )
{
	int i;
	int sum=0;
	int b[10];
	for(i=1;i<=n;i++)
	{
//		b[i]=fn(a,i);
//		printf("%d\n",b[i]);
//		sum=sum+b[i];
		sum+=fn(a,i);
	}return sum;
}
