#include <stdio.h>
int main()
{
	int x;
	
	printf("请输入数值:"); 
	scanf("%d",&x);
	
	int i=2;
	int n=1;
	
	while(i<x){
		if(x%i==0){
		
			n=0;
		}
			i++;	
	}if(n==1){
		printf("是素数");
	}else{
		printf("不是素数");
	} 
	
	return 0;
}

