#include <stdio.h>
int main()
{
	int x;
	
	for(x=2;x<=100;x++)
	{
		int i=2;
		int n=1;
		
		while(i<x){
			if(x%i==0){
			
				n=0;
				i++;}
				break;
		}if(n==1){
			printf(" %d", x);
		}
	}
	
	return 0;
}

