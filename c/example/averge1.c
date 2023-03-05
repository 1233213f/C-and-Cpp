#include <stdio.h>
int main()
{
	int x;
	int cnt=0;
	double sum=0;
	int number[100];
	scanf("%d",&x);
	
	while(x!=-1){
		number[cnt]=x;
		sum+=x;
		cnt++;
		scanf("%d",&x);
		
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		double average=sum/cnt;
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("%d\n",number[i]);
			}	
		}
	}
	
	return 0;
}
