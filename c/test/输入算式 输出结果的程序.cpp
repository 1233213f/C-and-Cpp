#include <iostream>
using namespace std;
int main()
{
    int a,b,c;                                //定义整型变量
    char flag;                                //定义字符变量
    cout<<"请输入算式："<<'\n';                 //提示，界面友好
    cin>>a>>flag>>b;                          //输入变量值
    switch (flag)                             //switch的运用
    {
    case '+':c=a+b;cout<<"计算结果为："<<c;break;//加法
    case '-':c=a-b;cout<<"计算结果为："<<c;break;//减法
    case '*':c=a*b;cout<<"计算结果为："<<c;break;//乘法
    case '/':c=a/b;cout<<"计算结果为："<<c;break;//商
    default :cout<<"eroor";break;               //输入错误有所提示
    }
    cout<<endl;
    return 0;                                   //结束
}
