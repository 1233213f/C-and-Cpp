#include<stdio.h>
#define Heught 10
int calculate(int Long,int Width);
int main() 
{
	int m_Long;
	int m_Width;
	int result;
	
	printf("长方形的高度为:%d\n");
	
	printf("请输入长度\n");
	scanf("%d",&m_Long);
		
	printf("请输入宽度\n");
	scanf("%d",&m_Width);
	
	result=calculate(m_Long,m_Width);
	printf("长方形的体积是: ");
	printf("%d\n",result);
	return 0;	
}
int calculate(int Long,int Width)
{
	int result=Long*Width;
	return result;
}
