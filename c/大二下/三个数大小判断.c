#include<stdio.h>
int Max(int x, int y)
{

    if(x<y)
        return y;    	
    else
        return x;
}
int Min(int x, int y)
{
	if(x<y)
        return x;
    else
        return y;
}

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    
    a=Max(a,Max(b,c));
    c=Min(a,Min(b,c));

    printf("%d,%d",a,c);

    return 0;
}
