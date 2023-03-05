#include <stdio.h>
int main()
{
	int a,b;
	int t,n;
	
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		if(a<b){
			n=a;
			a=b;
			b=n;
		}
	}
	
	printf("ACD=%d\n",a);
	
	return 0;
}

