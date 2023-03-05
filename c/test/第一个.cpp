#include<stdio.h> 
void fun(int x)
{
if(x>0)
printf("%d",x);
else
printf("0");
}
int main()
{
int a,i;
for(i=0;i<5;i++)
{
scanf("%d",&a);
fun(a);
}
return 0;
}
