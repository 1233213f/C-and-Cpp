#include<stdio.h> 
void main()
{
	int a,b,c,d;
	printf("请依次输入三角形的三边长a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c); 
	
	if(a<b+c&&b<a+c&&c<a+b) 
	{
		if((a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)&&(a!=b&&a!=c&&b!=c))
		{
			printf("直角三角形\n");
		}
		else if(a==b||a==c||b==c)
		{
			printf("等腰三角形\n");
		}
		else
		{
			printf("一般三角形\n");
		 } 
	}
	else
	{
		printf("不是三角形\n"); 
	 } 
 } 
