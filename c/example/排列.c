#include <stdio.h>

int max(int a[],int len)
{
	int maxid=0;
	int i=1;
	while(i<len)
	{
		if(a[i]>a[maxid])
		{
			maxid=i;
		}
		i++;
	}
	return maxid;
}

int main()
{
	int a[]={1,4,2,7,5,9,8,0,3,6};
	int len=sizeof(a)/sizeof(a[0]);
	
	int i=len-1;
	while (i>0)
	{
		int maxid=max(a,i+1);
		int t=a[maxid];
		a[maxid]=a[i];
		a[i]=t;
		i--;
	}
	i=0;
	while(i<len)
	{
		printf("%d",a[i]);
		i++;
	}
	
	return 0;
}
