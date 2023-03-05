#include <stdio.h> 
int main()
{
	int a=14;

	int t1 = a++;

	int t2 = ++a;
	printf("t1=%d t2=%d",t1,t2);
	return 0;
}
