#include <iostream>
using namespace std;

#include "network.h"

int main() {
  using namespace NETWORK;

  cout << "count = " << count << "\n";
  for (int i = 0; i < 3; i++)
    SendData();
  Test();

  return 0;
}