#include <stdio.h>
int main()
{
	int x;
	int n=0;
	
	printf("请输入需要判断位数的数字；",x);
	scanf("%d",&x);
	
	do
	{
		x/=10;
		n++;
	}while(x>0);
	
	printf("输入数字位数为：%d位\n",n);
	
	
	return 0;
}
