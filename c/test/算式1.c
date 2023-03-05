#include<stdio.h>

int main()
{
	int a,b;
	char q;
		scanf("%d",&a);
		scanf("%c",&q);
		scanf("%d",&b);
		switch(q){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		}
	return 0;
}
