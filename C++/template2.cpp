#include <iostream>
using namespace std;

template <typename T1, typename T2, int size> void Test(T2 *pData);

int main() {
  int x = 10;
  Test<char, int, 10>(&x);
  Test<int, int, 5>(&x);

  double y = 12.34;
  Test<int, double, 5>(&y);

  return 0;
}
template <typename T1, typename T2, int size> void Test(T2 *pData) {

  T1 arr[size];
  cout << "size of arr: " << sizeof(arr);
  T2 &data = *pData;
  cout << ", data : " << data << endl;
}