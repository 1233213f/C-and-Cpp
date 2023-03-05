#include <stdio.h>
int main()
{
	int x;
	int n=0;
	
	printf("请输入需要判断位数的数字；",x);
	scanf("%d",&x);
	
	n=n+1;
	x=x/10;
	
	while(x>0){
		n=n+1;
		x=x/10;
	}
	
	printf("输入数字位数为：%d位\n",n);
	
	
	return 0;
}
