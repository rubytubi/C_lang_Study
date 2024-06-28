#include <iostream>
using namespace std;

namespace UI {
int count; // 메뉴 선택 횟수
void Test() {
  cout << "사용자 인터페이스 모듈을 선택합니다.\n";
  cout << "메뉴 선택횟수 : " << count << "\n";
}

void ShowMenu() {
  cout << "메뉴를 보여줍니다.\n";
  count++;
}
} // namespace UI

namespace NETWORK {
int count; // 송수신 데이터 개수
void Test() {
  cout << "통신 모듈을 테스트합니다.\n";
  cout << "송수신 데이터 수 : " << count << "\n";
}

void SendData() {
  cout << "데이터를 전송합니다.\n";
  count++;
}

void RecvData() {
  cout << "데이터를 수신합니다.\n";
  count++;
}
} // namespace NETWORK

namespace DATA {
int count; // 처리된 데이터 수
void Test() {
  cout << "데이터 처리모듈을 테스트합니다.\n";
  cout << "처리된 데이터 수 : " << count << "\n";
}

void Preprocess() { cout << "데이터를 전처리 합니다.\n"; }
void Process() {
  cout << "데이터를 처리합니다.\n";
  count++;
}
} // namespace DATA

int main() {

  using UI ::count;
  count = 0;
  UI ::ShowMenu();
  UI ::Test();

  using namespace NETWORK;
  count = 10;
  for (int i = 0; i < 3; i++)
    SendData();
  Test();

  using namespace DATA;
  count = 0;
  Preprocess();
  Process();
  DATA::Test();

  return 0;
}