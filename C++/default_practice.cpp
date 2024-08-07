#include <iostream>
using namespace std;

enum INT_TYPE { DECIMAL, OCTAL, HEXADECIMAL };
void PrintArray(const int arr[], int size = 5, INT_TYPE type = DECIMAL);

int main() {
  int arr1[] = {10, 20, 30, 40, 50};
  int arr2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  PrintArray(arr1);
  PrintArray(arr1, 5, HEXADECIMAL);
  PrintArray(arr2);
  PrintArray(arr2, 10);

  return 0;
}

void PrintArray(const int arr[], int size, INT_TYPE type) {
  cout.setf(ios ::showbase);
  for (int i = 0; i < size; i++) {
    switch (type) {
    case DECIMAL:
      cout << dec;
      break;
    case OCTAL:
      cout << oct;
      break;
    case HEXADECIMAL:
      cout << hex;
      break;
    }

    cout.width(10);
    cout << arr[i] << " ";
  }

  cout << endl;
}