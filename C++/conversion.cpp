#include <iostream>
using namespace std;

char *NumberToString(int n);

int main() {
  int num;
  cout << "정수를 입력해라 : ";
  cin >> num;

  char *str = NumberToString(num);
  cout << "문자열로 변환된 값 : " << str << "\n";
  delete[] str;

  return 0;
}

char *NumberToString(int n) {
  char *p = new char[20];
  sprintf(p, "%d", n);
  return p;
}