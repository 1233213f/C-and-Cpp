#include <stdio.h>
int main()
{
	int type;
	scanf("%d",&type);
	
	switch(type){
		case 1:
			printf("Goood morning");
			break;
		case 2:
			printf("Good afternoon");
			break;
		case 3:
			printf("Good evening");
			break;
		default:
			printf("Oh,that's too bad!");
			break;
			}
	
	return 0;
}
