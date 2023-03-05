#include <stdio.h>
int main()
{
	const int pass=60;
	int score;
	
	printf("请输入成绩；");
	scanf("%d",&score);
	
	printf("你的成绩是%d.\n",score);
	if(score<pass){
		printf("没及格"); 
	}else{
		printf("及格"); 
	}printf("bye");
	
	return 0;
}
