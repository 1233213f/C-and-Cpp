#include <stdio.h>

int rearch(int key,int a[],int len)
{
	int ret=-1;
	int left=0;
	int right=len-1;
	while(right>left)
	{
		int mid=(right+left)/2;
		if(a[mid]==key)
		{
			ret=mid;
			break;
		}else if(a[mid]>key)
		{
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return ret;
}
