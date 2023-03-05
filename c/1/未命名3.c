#include"stdio.h"

int main()
{ 
	int n,i,k,l;
	printf("请输入字符串长度不大于10的字符串:");
	char str1[10],str2[10],str3[10];
	scanf("%s",&str1);

	l=strlen(str1);

	for(i=0;i<l/2;i++)
	{
		str2[i]=str1[i];
		str3[i]=str1[l-1-i];
	}	
//	printf("%s,%s",str2,str3);
	if(strcmp(str2, str3)) 
		printf("该字符串是回文的\n");
	else 
		printf("该字符串不是回文的\n");
 	return 0;
}
