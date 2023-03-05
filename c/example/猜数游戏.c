#include <stdio.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1; 
	int count=0;
	int a=0;
	
	printf("我已经想好了一个1到100的数。");
	do{
		printf("请猜猜这个数：");
		scanf("%d",&a) ;
		count++;
		if(a>number){
			printf("你的数猜大了。"); 
		}else if(a<number){
			printf("你的数猜小了。"); 
		}
	} while(a!=number);
	printf("太好了，你用了%d次就猜到了答案。\n",count);
	
	return 0;
}
