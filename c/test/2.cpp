#include <stdio.h>
#include <math.h>
int power(int num,int index);

int main() {
    int a, b;  //定义两个变量
    printf("请输入一个数:");  //输出提示信息
    scanf("%d", &a);  //获取用户输入的数值
    printf("请输入次幂数:");  //输出提示信息
    scanf("%d", &b);  //获取用户输入的数值
    printf("result: %d\n", power(a, b));  //输出结果

    return 0;
}
int power(int num,int index)
{
    if(index==0)
    {
        return 1;
    }
    else return num*power(num,index-1);
}
