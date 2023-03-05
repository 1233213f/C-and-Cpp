#include "stdio.h"

int main()
{   int a; float b; char c; 
    char s[100];
    char s1[]="a=100,b=3.14,c=@,s=Hello";
    sscanf(s1, "a=%d,b=%f,c=%c,s=%s",
		&a,&b,&c,s);
    printf("a=%d\n",a);
    printf("b=%g\n",b);
    printf("c=%c\n",c);
    printf("s=%s\n",s);
    return 0;
}
