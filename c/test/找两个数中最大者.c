#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int max,t;
	if (a>b)
	{
		t=a;
		a=b;
		b=a;
	}
	max=b;
	printf("max=%d",max);
	
	return 0;
}
