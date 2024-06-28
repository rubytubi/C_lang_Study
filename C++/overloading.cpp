#include <iostream>
using namespace std;

int GetSum(int x, int y);
double GetSum(double x, double y, double z);
int GetSum(const int arr[], int size);

int main() {
  int a, b;
  cin >> a >> b;

  cout << a << "+" << b << " = " << GetSum(a, b) << endl;

  double c, d, e;
  cin >> c >> d >> e;

  cout << c << "+" << d << "+" << e << "=" << GetSum(c, d, e) << endl;

  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "배열의 합계 = " << GetSum(arr, n) << "\n";

  return 0;
}

int GetSum(int x, int y) { return x + y; }

double GetSum(double x, double y, double z) { return x + y + z; }

int GetSum(const int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}