#include<stdio.h> 
void main() 
{
	char a;
	printf("ÇëÊäÈë×ª»»×Ö·û:\n");
	scanf("%c",&a);
	
	if(a>='A'&&a<='Z')
	{
		a+=32; 
	}
	else
	{
		a-=32; 
	 } 
	printf("×ª»»ºó×Ö·ûÎª:%c \n",a);
}
