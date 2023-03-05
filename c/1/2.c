#include<stdio.h>
#include<string.h>
void sort(int a[], char b[][11])//a为数组地址
{
	int i, j,v;
	char s[11];
	for(i = 0; i < 9; i ++)
	for(j = i+1; j<10; j ++)
	{
		if(a[i] > a[j])
		{
			v = a[i];
			a[i] = a[j];
			a[j] = v;
			strcpy(s,b[i]);
			strcpy(b[i],b[j]);
			strcpy(b[j],s);
		}
	}
}
main()
{
	int a[10],i;
	char b[10][11];
	for(i=0;i<=9;i++)
	{ 
		scanf("%d",&a[i]);
		scanf("%s",b[i]);
	}
	sort(a,b);
	for(i=0;i<=9;i++)
	{ 
	printf("%d %s\n",a[i],b[i]);
	}
	return 0;
}

