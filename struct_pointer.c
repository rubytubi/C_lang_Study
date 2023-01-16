#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Person{
    char name[30];
    int age;
    char address[100];
} Person;

int main()
{
    Person *p1 = malloc(sizeof(Person));

    strcpy(p1->name, "이성민");
    p1->age = 24;
    strcpy(p1->address, "서울시 강서구 마곡동");

    printf("%s, %d, %s\n", p1->name, p1->age, p1->address);

    free(p1);

    return 0;
}