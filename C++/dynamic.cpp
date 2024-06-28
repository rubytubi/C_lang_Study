#include <iostream>
using namespace std;

int main() {
  int *p = NULL;
  p = new int(0);

  if (p == NULL) {
    cout << "동적 메모리 할당 실패\n";
    return 1;
  }

  cout << "정수를 입력해라 :";
  cin >> *p;
  cout << "입력된 정수는 " << p[0] << "\n";

  delete p; //  동적 메모리 해제
  p = NULL;

  return 0;
}