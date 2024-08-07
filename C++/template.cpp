#include <iostream>
using namespace std;

struct POINT {
  int x, y;
};

template <typename T> void Swap(T &x, T &y);
template <typename T> T GetMax(T x, T y);

int main() {

  int a = 10, b = 20;
  Swap(a, b);
  cout << "a = " << a << ", b = " << b << endl;

  POINT p1 = {10, 20};
  POINT p2 = {100, 200};
  Swap(p1, p2);

  cout << "p1 = (" << p1.x << ", " << p1.y << ")\n";
  cout << "p2 = (" << p2.x << ", " << p2.y << ")\n";

  cout << "GetMax(10, 20) = " << GetMax(10, 20) << endl;
  cout << "GetMax(3.14, 10.5) = " << GetMax(3.14, 10.5) << endl;
  cout << "GetMax<int>(5, 10.5) = " << GetMax<int>(5, 10.5) << endl;

  return 0;
}

template <typename T> void Swap(T &x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}

template <typename T> T GetMax(T x, T y) { return x > y ? x : y; }