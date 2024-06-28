#include <stdio.h>

#define KOREAN 0
#define MATH 1
#define ENGLISH 2

char cal(int grade[]) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += grade[i];
  }
  sum /= 3;
  if (sum >= 90)
    return 'A';
  else if (sum >= 80)
    return 'B';
  else
    return 'C';
}

int main() {
  int grade[3];
  for (int i = 0; i < 3; i++) {
    scanf("%d", &grade[i]);
  }
  printf("%c\n", cal(grade));
}
