/*
<백트래킹>
4-Queen문제
*/

#include <iostream>
using namespace std;

void go(int count) {
  if (count == 4) { //<-- 기저사례(이미 끝까지 간 경우)
    for (int i = 0; i < 4; i +)
      cout << ans[i].first << " " << ans[i].sceond << '\n';
    cout << "\n";
    return; // 끝까지 갔다면 종료
  }
  for (int i = 0; i < 4; i++) {
    if (board[count][i] == 0) { // 퀸을 둘 수 있는 상황
      //(count, i) 자리에 두었을 때, 그 다음 둘 수 없는 경우 check
      for (int k = 1; i < 4; k++) {
        // 아래
        if (count + k < 4)
          board[count + k][i]++;
        // 오른쪽 아래 대각선
        if (count + k < 4 && i + k < 4)
          board[count + k][i + k]++;
        // 왼쪽 아래 대각선
        if (count + k < 4 && i - k >= 0)
          board[count + k][i - k]++;
      }

      ans[count] = {count, i};
      go(count + 1);
      // 백 트래킹
      for (int k = 1; k < 4; k++) {
        if (count + k < 4)
          board[count + k][i]--;
        if (count + k < 4 && i + k < 4)
          board[count + k][i + k]--;
        if (count + k < 4 && i - k >= 0)
          board[count + k][i - k]--;
      }
    }
  }
  return;
}

int main() { return 0; }