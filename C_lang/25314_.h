// long int 4b, long long int 8b,
#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main(void) {

  int n, i = 0, j = 0;
  scanf("%d", &n);

  i = n / 4;

  while (j < i) {
    printf("long ");
    j++;
  }
  printf("int\n");

  return 0;
}
