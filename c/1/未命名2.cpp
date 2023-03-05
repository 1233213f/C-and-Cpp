#include <stdio.h>
#include<string.h>
int main()
{
	int a;
    char str[10];  //str是string的缩写, 即字符串
    printf("请输入字符串：");
    scanf("%s", str);  //输入参数是已经定义好的字符数组名
    printf("输出结果：%s\n", str);
    
    a = strlen(str);
    printf("%d",a);
    return 0;
}
