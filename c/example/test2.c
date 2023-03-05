#include <stdio.h>
int main()
{
	printf("输入任意一个三位数：");
	
	int a;
	
	scanf("%d",&a);
	
	int b,c,d,e,g,h,i;
	
	b=a/100;
	c=a%100;
	
	d=c/10;
	e=c%10;
	
	if(d>b){
		g=d;
		d=b;
		b=g;	
	}
	if(e>d){
		h=e;
		e=d;
		d=h;
	}
	if(d>b){
		i=d;
		d=b;
		b=i;
	}
	int m;
	
	m=b*100+d*10+e;
	
	printf("%d",m);
	
	return 0;
}
