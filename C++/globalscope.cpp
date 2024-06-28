#include <iostream>
using namespace std;

int data = 10; // 전역변수
void Func() { cout << "전역함수 Func 호출\n"; }

namespace X {
int data = 20;
void Func() { cout << "X :: Func 호출\n"; }
} // namespace X

int main() {
  using namespace X;

  int data = 30;
  cout << "data = " << data << "\n";
  cout << "data = " << X::data << "\n";
  cout << "data = " << ::data << "\n";

  X::Func();
  ::Func();

  return 0;
}