#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit )
{
	int i=0;
	int t;
	if(number<0) number=-number;
	if(number==0&&digit==0)
	{
		i=1;
		return i;
	}
	while(number)
	{
		
		t=number%10;
		if(t==digit)
		{
			i++;
			
		}
		number/=10;
		
	}return i;
}
//int CountDigit( int number, int digit )
//{
// if(number<0) number=-number;
// if(number==0&&digit==0) return 1;
//  else
//  {
//    int tt=0;
//    while(number)
//    {
//      int temp=number%10;
//      if(temp==digit) tt++;
//      number/=10;
//    }
//    return tt;
//  }
//}
