#include <stdio.h>
int main() 
{
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1-hour2;
	int t2=minute1-minute2;
	
	if(t2<0){
		t2=60+t2;
		t1=t1-1;
	}
	
	printf("时间是差%d小时%d分钟\n",t1,t2);
	
	return 0;
}
