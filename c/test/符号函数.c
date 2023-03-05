#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}
int sign( int x ) 
{
	int t;
	if (x>0)
	{
		t=1;
	}else if(x<0)
	{
		t=-1;
	}else
	{
		t=0;
	}return t;
}
