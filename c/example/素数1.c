#include <stdio.h>
int main()
{
	const int maxNumber=25;
	int isPrime[maxNumber];
	int i;
	int x;
	for(i=0;i<maxNumber;i++){
		if(isPrime[x]) {
			for(x=2;x<maxNumber;x++){
				isPrime[i*x]=0;
			}
		}
	}
	for(i=2;i<maxNumber;i++){
		if(isPrime[i]){
			printf("%d\t",i);
		}
	}
	printf("\n");
	
	return 0;
}
