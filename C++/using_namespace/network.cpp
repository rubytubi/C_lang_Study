#include <iostream>
using namespace std;

#include "network.h"

int NETWORK::count = 0;

void NETWORK::Test() {
  cout << "통신모듈을 테스트합니다.\n";
  cout << "송수신 데이터 수: " << count << "\n";
}

void NETWORK::SendData() {
  cout << "데이터를 전송합니다.\n";
  count++;
}

void NETWORK::RecvData() {
  cout << "데이터를 수신합니다.\n";
  count++;
}
