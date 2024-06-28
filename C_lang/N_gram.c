#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[11];
    int n, length;

    scanf("%d %s", &n, s1);

    length = strlen(s1);

    if(n > length)
    {
        printf("wrong\n");
    }    
    else 
    {
        for(int i = 0; i < length - (n - 1); i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%c", s1[i + j]);
            }
            printf("\n");
        }
    }

    return 0;
}