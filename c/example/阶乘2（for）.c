#include <stdio.h>
int main()
{
	int i=1;
	int n;
	
	printf("阶乘的数；",n);
	scanf("%d",&n);
	
	int m=1;
	
	for(i=1;i<=n;i++){
		m*=i;
	}
	
	printf("阶乘结果为：%d!=%d\n",n,m);
	
	
	return 0;
}
