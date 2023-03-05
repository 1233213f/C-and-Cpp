#include<stdio.h> 
void cmp(int v)
{
	if(v>0)
		printf("%d\n",v);
	else
		printf("0\n");
}

int main()
{
	int a,i,q;
	int h[8]={8,4,9,-9,-10,3,-9,33}; 
	
	for(i=0;i<8;i++)
	{

		cmp(h[i]);
	}
	return 0;
}
