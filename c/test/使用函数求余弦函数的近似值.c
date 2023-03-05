#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x )
{
    double tmp1=1,tmp2=1,tmp3=1,sum=1;
    int i,k;

    k=-1;
    for(i=2;tmp1>e;i+=2) 
    {    
        tmp2 = tmp2*x*x;        // 分子
        tmp3 = tmp3*i*(i-1);    // 分母
        sum =sum + k*tmp2/tmp3; // 和
        tmp1 = tmp2/tmp3;        // 误差上限
        k = -k;                    // 改变符号
    }
    return sum;
}
