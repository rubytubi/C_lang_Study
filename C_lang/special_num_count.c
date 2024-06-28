#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[1001];
    char *sArr[1001] = { NULL, };
    int i = 0, count = 0;

    scanf("%[^\n]s", s1);

    char *ptr = strtok(s1, "., ");

    while(ptr != NULL)
    {
        sArr[i] = ptr;
        i++;

        ptr = strtok(NULL, "., ");    //자른 문자 다음붜 구분자 찾기.
    }

    for(int i = 0; i < 1001; i++)
    {
        if(sArr[i] != NULL && strcmp(sArr[i], "the") == 0)
        count++;
    }

    printf("%d\n", count);

    
    return 0;
}