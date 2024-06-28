#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct WORD {
  string str; // 각 단어의 내용
  int count;  // 각 단어의 사용 빈도
};

vector<WORD *> words; // WORD  구조체 포인터를 저장하는 벡터 객체

int FindWords(const string &s);
void CountWords(const string &s);
void ShowWords();
void RemoveAll();

int main() {
  cout << "문자열을 입력하세요. 종료하려면 Ctrl + z을 입력하세요.\n";
  string buffer;
  while (cin >> buffer)
    CountWords(buffer);
  ShowWords();
  RemoveAll();

  return 0;
}

void CountWords(const string &s) {
  int index = FindWords(s);
  if (index == -1) {
    WORD *pWord = new WORD; // WORD 구조체를 동적으로 생성
    pWord->str = s;
    pWord->count = 1;
    words.push_back(pWord);
  } else {
    words[index]->count++;
  }
}

int FindWords(const string &s) {
  for (int i = 0; i < words.size(); i++)
    if (words[i]->str == s)
      return i;
  return -1; // 단어 검색 실패
}

void ShowWords() {
  for (int i = 0; i < words.size(); i++)
    cout << words[i]->str << " : " << words[i]->count << "번\n";
}

void RemoveAll() {
  for (int i = 0; i < words.size(); i++)
    delete words[i];
}
