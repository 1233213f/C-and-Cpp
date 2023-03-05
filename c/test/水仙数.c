// 水仙花数（Narcissistic number）
// 也被称为超完全数字不变数（pluperfect digital invariant, PPDI）、自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number）
// 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。
// 例如：1^3 + 5^3+ 3^3 = 153
#include <stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e, a1;
	int i; 
	
	printf("请输入一个数："); 
	scanf("%d",&a1);// 输入一个三位数 
	a = a1;
	
	for(i = 0; a1 >= 1; i++)
	{
		a1 = a1 / 10;
	}
	
	// 判断是否为三位数 
	if(i != 3)
	{	
	// 不是三位数 
		printf("data error");
	}
	else
	{
		//  把三位数的百、十、个，数字取出
		b = a / 100; // 百位数
		c = a % 100; //  去除百位上数字
		d = c / 10;  // 十位数
		e = c % 10;  // 个位数

        if(b * b * b + d * d * d + e * e * e == a)
			printf("Y\n"); 
		else
		{
			printf("N\n"); 
		}
    }
    return 0;
}
