#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* 你的代码将被嵌在这里 */
double dist( double x1, double y1, double x2, double y2 )
{
	double n,m,dist;
	n=(x1-x2)*(x1-x2);
	m=(y1-y2)*(y1-y2);
	dist=sqrt(n+m);
//	t=[(x1-x2)^2+(y1-y2)^2]^(1/2);
	return dist;
}
