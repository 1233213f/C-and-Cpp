#include <stdio.h> 
int main()
{
	const int MINOR=35;
	
	int age=0;
	
	printf("请输入您的年龄：");
	scanf("%d",&age);
	
	printf("您的年龄是%d岁。\n",age);
	
	if(age<MINOR){
		printf("年轻是美好的，"); 
	}
	printf("年龄决定了你的精神世界，请好好珍惜吧！"); 
	return 0;
}
