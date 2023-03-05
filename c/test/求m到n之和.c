#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int t;
	int sum;
	if (m<n)
	{
		t=n;
		n=m;
		m=t;
	}
	for (;n<=m;n++)
	{
		sum+=n;
	}
	printf("sum=%d",sum);
	
	
	return 0;
}
