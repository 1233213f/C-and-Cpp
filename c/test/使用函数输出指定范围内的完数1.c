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
int factorsum(int nubmer)
{
    int i,sum=0;
    
    for(i=1;i<=10000;i++)
    {
        sum=sum+i;
        if(nubmer==sum) 
        {
            return sum;
            
        }
    }
    return 0;
}

int factorsum1(int nubmer)
{
    int i,sum=0;
    
    for(i=1;i<=10000;i++)
    {
        sum=sum+i;
        if(nubmer==sum) 
        {
            return i;
            
        }
    }
    
}


void PrintPN(int m,int n)
{
    int i,j;
    if (m>0&&m<n&&n<10000)
        for(i=m;i<=n;i++)
        {
            if(factorsum(i)==i)
            {
                printf("%d=",factorsum(i));    
                for(j=1;j< factorsum1(i) ;j++)
                {
                    printf("%d+",j);
                }
                printf("%d",j);
                printf("\n");
            }
        }
}
