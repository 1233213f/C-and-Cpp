#include<stdio.h>

int main()
{
	double a,b;
	char q;
	scanf("%lf",&a);
	do	
	{
//		printf("%d",a);
		scanf("%c",&q);
		if(q!='=')
			scanf("%lf",&b);
//		printf("a=%d,b=%d,q=%c\n",a,b,q);
		if(q=='+')
			a=a+b;
		else if(q=='-')
			a=a-b;
		else if(q=='*')
			a=a*b;
		else if(q=='/')
			a=a/b;	
	}while(q!='=');
	printf("The operation result is %f\n",a);	
	return 0;
}
