//给出一个百分制成绩，要求输出成绩等级"Ａ"、"Ｂ"、"Ｃ"、"Ｄ"、"Ｅ"。90分以上为"Ａ"，81～89分为"Ｂ"，70～79为"Ｃ"，60～69为"Ｄ"，60分以下为"Ｅ"
//当输入数据大于100或小于0时，通知用户"输入数据错"，程序结束
//请用switch语句加以实现。
//（1）算法提示： ①定义百分制成绩(实变量)score ；②提示输入"Please enter score:" ；③读入score ；④判断score所在的区间，对应出score的等级并打印相应等级（进一步细化）
//（2）用switch语句实现的源程序
//（3）测试所编写的程序
#include <stdio.h>
#include <math.h>

int main() {
	
    int s, a;  //定义两个变量
    printf("Please enter score:");  //输出提示信息
    scanf("%d", &s);  //获取用户输入的数值
    
    if(s > 100 || s < 0)
    {
    	printf("输入数据错误");
	}
    else
	{
		switch(s/10)
		{
        case 9 : 
			printf("A\n"); 
			break;
		case 8 : 
			printf("B\n"); 
			break;
		case 7 : 
			printf("C\n"); 
			break;
		case 6 : 
			printf("D\n"); 
			break;
        default:
			printf("E\n"); 
			break;
    	}
	} 

    return 0;
}

