#include <stdio.h>

void print_line(int n) {
  for (int i = n; i > 0; i--) {
    printf("%d ", i);
  }
}

void print_triangle(int n) {
  for (int i = n; i > 0; i--) {
    print_line(i);
    printf("\n");
  }
}

void print(int n) {
  while (n < 0) {
    print_triangle(n);
    printf("\n");
    n++;
  }
}

int main() {
  int n;
  printf("크기를 입력하세요: ");

  scanf("%d", &n);
  print(n);
}