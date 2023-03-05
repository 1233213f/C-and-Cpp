#include"stdio.h"
int main()
{ 
	int n,i,k,l;
	k=0;
	printf("请输入字符串长度不大于10的字符串:");
	char str1[10];
	scanf("%s",&str1);
	l=strlen(str1);
	if(l>10)
	{
		printf("请重新输入");	
	}
	else
	{
		for(i=0;i<l/2;i++)
		{
			if(str1[i]==str1[l-1-i])
			k = k+1;
		}
	if(k==l/2)
		printf("该字符串是回文的\n");
	else
		printf("该字符串不是回文的\n");
	}
 	return 0;
}
