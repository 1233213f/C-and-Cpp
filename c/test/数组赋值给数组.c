#include <stdio.h>
int main()
{
	int i;
	int a[]={1,1,2,3,4,5,2,39,87,65,53,24,32,22,56,0,};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		int b[i]; 
		b[i]=a[i];
		
		printf("%d ",b[i]);
	}
	
	return 0;
}
