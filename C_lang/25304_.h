#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
  int x;
  int n;
  int arr[100] =
      {
          0,
      },
      price[100] =
          {
              0,
          },
      sum = 0;
  int i = 0;

  scanf("%d", &x);
  scanf("%d", &n);

  while (i < n) {
    scanf("%d %d", &arr[i], &price[i]);
    sum += arr[i] * price[i];
    i++;
  }

  if (x == sum)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}