#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
  int n;
  scanf("%d", &n);
  int num[n];
  int i = 0;
  int count = 0;

  while (i < n) {

    scanf("%d", &num[i]);
    i++;
  }
  int v = 0;
  scanf("%d", &v);

  while (i < n) {
    if (v == num[i])
      count++;
  }

  printf("%d\n", count);

  return 0;
}