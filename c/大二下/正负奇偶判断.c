#include<stdio.h> 

/*
void main()
{
	int a;
	scanf("%d",&a);

	if(a>0)
	{
		printf("正数\n");
	}
	else if(a==0)
	{
		printf("既不是正数也不是负数\n");
	}
	else
	{
		printf("负数\n");
	} 
	
	if(a%2==0&&a>0)
	{
		 printf("偶数\n");
	}
	else
	{
		printf("奇数\n");
	}
	
 }
 */
 
 void main()
 {
	int a;
	printf("请输入判断正负奇偶的整数:\n"); 
	scanf("%d",&a);
	
	 
	if(a%2==0)
	{
		if(a>0)
		{ 
			printf("正偶数\n");
		}
		else if(a==0)
		{
			printf("非正非负但为偶数"); 
		}
		else
		{
			printf("负偶数"); 
		}		 
	 } 
	else
	{
		if(a>0)
		{ 
			printf("正奇数\n");
		}
		else if(a==0)
		{
			printf("非正非负但为奇数"); 
		}
		else
		{
			printf("负奇数"); 
		}		 
	} 

	
  } 
