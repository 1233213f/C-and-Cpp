#include <stdio.h>

int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}else{
		return b;
	}
	
	printf("%d %d\n",a,b); 
}
int main()
{
	int a=5;
	int b=6;
	int t;
	
	int maxid=max(a,b);
	
	
	
	
	printf("%d %d %d",a,b,maxid);
	
	return 0;
}
