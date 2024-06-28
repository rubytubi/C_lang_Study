#include <iostream>
using namespace std;

void Swap(int *x, int *y);

int main() {

  int a, b;

  cout << "변수 입력: ";
  cin >> a >> b;

  cout << "Swap 호출 전의 a = " << a << ", b = " << b << endl;

  Swap(&a, &b);

  cout << "Swap 호출 후의 a = " << a << ", b = " << b << endl;

  return 0;
}

void Swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}