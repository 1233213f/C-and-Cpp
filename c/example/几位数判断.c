#include <stdio.h>
int main()
{
	int x;
	int n;
	
	printf("请输入需要判断位数的数字；",x);
	scanf("%d",&x) ;
	
	if(x>999){
		n=4;
	}else if(x>99){
		n=3;
	}else if(x>9){
		n=2;
	}else{
		n=1;
	}
	printf("输入数字位数为：%d位\n",n);
	
	return 0;
}
