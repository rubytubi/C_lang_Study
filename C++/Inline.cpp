#include <iostream>
using namespace std;

inline int Add(int x, int y);

int main() {

  int a, b;

  cin >> a >> b;

  cout << "a + b = " << Add(a, b) << "\n";

  return 0;
}

inline int Add(int x, int y) { return x + y; }