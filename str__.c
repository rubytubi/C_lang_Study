#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
// strstr -> 문자열 찾기  "" 사용
// strchr -> 문자 찾기  '' 사용
// strtok -> 다양한 문자를 기준으로 문자열 자를수 있음 "" 사용

int main()
{
    char s1[61];
    char *sArr[61] = { NULL, };
    int i = 0;

    scanf("%s", s1);

    char *ptr = strtok(s1, ".");

    while(ptr != NULL)
    {
        sArr[i] = ptr;
        i++;

        ptr = strtok(NULL, ".");    //자른 문자 다음붜 구분자 찾기.
    }

    for(int i = 0; i < 61; i++)
    {
        if(sArr[i] != NULL)
            printf("%s\n", sArr[i]);
    }

    return 0;
}