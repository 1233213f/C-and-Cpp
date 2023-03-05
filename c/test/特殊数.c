#include <stdio.h>
int main()
{
	int a=1,b=2,c,i;
	int m,n;
	printf("ÇëÊäÈë×î´ó·¶Î§£º"); 
	scanf("%d",&m);
	for(c=3;c<=m;c++)
	{
		printf("%d\n",c);
		n=a+b;
		printf("%d\n",n);
		if(n==c)
		printf("%d %d %d\n",a,b,c);
		a=a+1;
		b=b+1;	
	}
	return 0;
}
