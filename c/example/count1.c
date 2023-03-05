#include <stdio.h>

int main()
{
	const int number=10;
	int x;
	int count[number];
	int i;
	
	for(i=0;i<number;i++){
		count[i]=0;
	}
	scanf("%d",&x);
	while(x!=-1){
		if(x>0&&x<number){
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++){
		printf("£¨%dÓĞ%d¸ö£©",i,count[i]);
	}
			
			
	return 0;
}
