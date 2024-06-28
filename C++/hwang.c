/*
#include <stdio.h>
#pragma warning(disable : 4996)

void Swap(int *param) {
  int i, a = 9, b = 0;
  int temp[10];
  for (i = 0; i <= 9; i++) {
    if (param[i] % 2 == 0) {
      temp[a] = param[i];
      a--;
    }

    else {
      temp[b] = param[i];
      b++;
    }
  }

  for (i = 0; i <= 9; i++) {
    param[i] = temp[i];
  }
}

int main(void) {
  int arr[10];
  int i;

  printf("총 10개의 숫자 입력 \n");
  for (i = 0; i <= 9; i++) {
    printf("입력: ");
    scanf("%d", &arr[i]);
  }

  Swap(arr);
  printf("배열 요소의 출력: ");
  for (i = 0; i <= 9; i++)
    printf("%d ", arr[i]);
  return 0;
}
*/

#include <stdio.h>
#pragma warning(disable : 4996)

void Swap(int *param) {
  int i, a = 9, b = 0;
  for (i = 0; i <= 9; i++) {
    if (param[i] % 2 == 0) {
      param[a] = param[i];
      a--;
    }

    else {
      param[b] = param[i];
      b++;
    }
  }
}

int main(void) {
  int arr[10];
  int i;

  printf("총 10개의 숫자 입력 \n");
  for (i = 0; i <= 9; i++) {
    printf("입력: ");
    scanf("%d", &arr[i]);
  }

  Swap(arr);
  printf("배열 요소의 출력: ");
  for (i = 0; i <= 9; i++)
    printf("%d ", arr[i]);
  return 0;
}