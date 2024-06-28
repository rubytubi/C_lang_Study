#include <iostream>
using namespace std;

#define ADD(x, y) x + y
#define MUL(x, y) x *y

inline int Add(int x, int y);
inline int Mul(int x, int y);

int main() {
  cout << MUL(10 + 20, 30 + 40) << endl;
  cout << Mul(10 + 20, 30 + 40) << endl;

  // cout << ADD("abc", 10) << endl; -> 매크로 함수는 인자 검사 X (CAUTION!!)

  return 0;
}

inline int Add(int x, int y) { return x + y; }

inline int Mul(int x, int y) { return x * y; }