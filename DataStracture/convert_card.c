#include <stdio.h>

// 정수 x 를 n 진수로 변환하여 배열 d에 아랫자리부터 저장
int card_convr(unsigned x, int n, char d[]) {
  char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int digits = 0;

  if (x == 0)
    d[digits++] = dchar[0];

  else
    while (x) { // x가 0이 될 때까지
      d[digits++] = dchar[x % n];
      x /= n;
    }
  return digits;
}