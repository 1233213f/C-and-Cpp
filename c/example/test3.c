#include<stdio.h>
//问题在哪里呢? 为啥没有结果? 
int max(int a[],int len)

{
	int maxid=0;
	int i=1 ;
	for(i;i<len;i++)
	{
		if(a[i]>a[maxid]){
			maxid = i;
		}	
	}
	return maxid;
}
int main ()
{
	int a[]={12,45,85,6,95,84,52,3,2,23};
	int len=sizeof(a)/sizeof(a[0]);
	//选择排序
	int i=len-1;
	for (i;i>0;i++)
	{
		int maxid = max (a,i+1);
		//交换a[maxid] 和a[len-1]
		int t= a[maxid];
		a[maxid]=a[i];
		a[i]=t;
	} 
	int k=0;
	for(k;k<len;k++)
	{
		printf("%d ",a[k]);
	} 
	return 0 ; 

}
