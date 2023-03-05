#include <stdio.h>
int main()
{
	int x,n;
	scanf("%d",&x);
	
	int mask;
	int t=x;
	for(mask=1;t>=10;mask=mask*10){
		t/=10;
	}
//	printf("%d %d",x,mask);
	int d;
	do{
		d=x/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");
		}
		x%=mask;
		mask/=10; 
	}while(mask>0);
	printf("\n");
	
	return 0;
}

