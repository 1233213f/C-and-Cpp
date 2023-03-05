#include <stdio.h>
int main()
{
	int price;
	int bill;
	
	printf("请输入你的金额：");
	scanf("%d",&price);
	
	printf("请输入票面：");
	scanf("%d",&bill);
	
	if(bill>=price){
		printf("应该找您；%d（元）\n",bill-price);
	}else{
		printf("您的钱不够\n");
	}
	return 0;
}

