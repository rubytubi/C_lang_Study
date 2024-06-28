#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s1[31];
    scanf("%[^\n]s", s1);

    int length;
    bool isPalindrome = true;

    length = strlen(s1);

    for(int i = 0, j = length - 1; i < j; i++, j--)
    {
        while(s1[i] == ' ')
        i++;
        while(s1[j] == ' ')
        j--;
        if(s1[i] != s1[j])
        {
            isPalindrome = false;
            break;
        }
    }

    printf("%d\n", isPalindrome);
    
    return 0;
}