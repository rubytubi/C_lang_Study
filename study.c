#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{   
    int numArr[5] = { 11, 22, 33, 44, 55};
    int *numPtrA;
    int *numPtrB;
    int *numPtrC;

    numPtrA = &numArr[2];
    
    numPtrB = numPtrA;
    numPtrC = numPtrA;

    numPtrB++;
    numPtrC--; 

    printf("%p\n", numPtrA);
    printf("%p\n", numPtrB);
    printf("%p\n", numPtrC);

    return 0;
}