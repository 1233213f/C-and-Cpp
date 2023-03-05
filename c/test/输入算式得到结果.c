#include<stdio.h>
#include <string.h>
#include <stdlib.h>
 int main(int argc, char *argv[])
 {
    char inputCh[255];
    scanf("%s", inputCh);
    int isum = 0;
    int snums[255];
    char suanshu[255];
    char linshi[255];

    int j = 0;
    for (int i = 0; i < strlen(inputCh); i++)
    {
        if (inputCh[i] != '\0')
        {
            if (i == strlen(inputCh) - 1)
            {
                linshi[j] = inputCh[i];
                int ilinshi = atoi(linshi);
                snums[isum] = ilinshi;
                isum++;
                break;
            }

            if (inputCh[i] == '-' || inputCh[i] == '+')
            {
                j = 0;
                int ilinshi = atoi(linshi);
                snums[isum] = ilinshi;
                suanshu[isum] = inputCh[i];
                isum++;
                memset(linshi, '\0', strlen(linshi) *sizeof(char));
            }
            else
            {
                linshi[j] = inputCh[i];
                j++;
            }
        }
    }

    int jieguo = snums[0];
    for (int s = 0; s < isum;s++)
    {
        switch (suanshu[s])
        {
        case '+':
            jieguo = jieguo + snums[s+1];
            break;
        case '-':
            jieguo = jieguo - snums[s+1];
            break;
        default: break;
        }
    
    }
    printf("%s=%d\n", inputCh, jieguo);
}
