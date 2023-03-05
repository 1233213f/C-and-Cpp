#include <stdio.h>
#define MAXS 15
#include <math.h>

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char s[] )
{
	int i;
	int letter=0,blank=0,digit=0,other=0;
	/*此处出现了一个小问题，判断条件写成了'i<MAXS'报错了*/ 
	for(i=0; s[i]!='\0'; i++)
	{
		if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')){
			letter++;
		}
		else if(s[i]>='0' && s[i]<='9'){
			digit++;
		}
		else if(s[i]==' ' || s[i]=='\n'){
			blank++;
		}
		else
			other++;	
	}	
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
}

