#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double sum=0.0;
	int s=1; 
	
	for(i=1;i<=n;i++){
		sum+=s*1.0/i;
		s=-s;
	}
	printf("f(%d)=%f\n",n,sum);
	
	return 0;
}

