#include <iostream>
using namespace std;

int main() {
  int arr[10][10] = {
      0,
  };

  arr[0][0] = 1;
  arr[0][1] = 1;
  arr[0][2] = 1;
  arr[1][2] = 1;
  arr[2][2] = 1;
  arr[3][2] = 1;
  arr[3][3] = 1;
  arr[3][4] = 1;
  arr[3][5] = 1;
  arr[3][6] = 1;
  arr[4][6] = 1;
  arr[5][6] = 1;
  arr[6][6] = 1;
  arr[7][6] = 1;
  arr[7][7] = 1;
  arr[8][7] = 1;
  arr[8][8] = 1;
  arr[9][8] = 1;
  arr[9][9] = 1;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (arr[i][j] == 1) {
        cout << "(" << i << ", " << j << ") ";
      }
    }
  }
  cout << endl;

  return 0;
}