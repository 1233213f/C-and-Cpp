#include <stdio.h>

int main()

{

    int M;

    int N;

    int j;

    int n=0;

    int m=0;

    int i;

    scanf("%d%d",&M,&N);

    for ( i=M; i <= N; i++)

    { 

        for ( j=2; j<i; j++){

           if(i%j=0){

                n++;

                m+=i;

               

                }

           

           break;

           }

        

        



    }

printf("%d %d",n, m);

} 
