#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    int t;
    if(m>n)
    {
    	t=m;
    	m=n;
    	n=t;
	}
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
//int prime( int p )
//{
//	if(p<2)
//	{
//		return 0;
//	}else
//	{
//		int i,j,t=1;
//		for(i=2;i<p;i++)
//		{
//			j=p%i;
//			if(j==0)
//			{
//				t=0;
//				break;
//			}
//		}return t;
//	}
//}
//int PrimeSum( int m, int n )
//{
//
//	int sum=0;
//	while(m<n)
//	{
//		int t=prime(m);
//		if(t==1)
//		{
//			sum+=m;
//		}
//		m++;
//	}
//	return sum;
//}
int prime( int p )
{
  if(p<2) return 0;
  else
  {
     int i;
     int l=1;
     for(i=2;i<=sqrt(p);i++)
     {
       if(p%i==0)
       {
         l=0;
         break;
       }
     }
     return l;
  }
}
int PrimeSum( int m, int n )
{
  int sum=0;
  int i;
  for(i=m;i<=n;i++)
  {
    int temp=prime(i);
    if(temp==1) sum+=i;
  }
  return sum;
}
