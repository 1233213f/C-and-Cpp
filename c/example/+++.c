#include <stdio.h>
int main()
{
	int x;
	int o,t,f;
	
	scanf("%d",&x);
	for(o=1;o<x*10;o++){
		for(t=1;t<x*10/2;t++){
			for(f=1;f<x*10/5;f++){
				if(o+t*2+f*5==x*10){
					printf("可以用%d个1角加%d个2角和%d个5角得到%d元\n",o,t,f,x);
//						goto out;
				}
			}
		}
	}
		 
//out:	
	return 0;
}

