#include <iostream>
using namespace std;

struct WORD {
  char *str; // 각 단어의 내용
  int count; // 각 단어의 사용 빈도
};

int max_of_words = 10; // 전체 words 배열의 크기
int num_of_words = 0;  // 입력된 words의 개수
WORD *words = NULL;    // 동적 메모리 배열의 주소

int FindWords(const char *s);
void Increase();
void CountWords(char *s);
void ShowWords();
void RemoveAll();

int main() {
  words = new WORD[max_of_words];
  memset(words, 0, sizeof(WORD) * max_of_words);

  cout << "문자열을 입력하세요. 종료하려면 Ctrl + z을 입력하세요.\n";

  while (true) {
    char buffer[128];
    cin.getline(buffer, 128);
    CountWords(buffer);
    if (cin.eof())
      break;
  }
  ShowWords();
  RemoveAll();

  return 0;
}

void CountWords(char *s) {
  const char *delimiter = " ,.?!/t/n";
  char *token = strtok(s, delimiter);
  while (token != NULL) {
    int index = FindWords(token);
    if (index == -1) {
      if (num_of_words >= max_of_words)
        Increase();

      else {
        words[num_of_words].str = new char[strlen(token) + 1];
        strcpy(words[num_of_words].str, token);
        words[num_of_words].count = 1;
        num_of_words++;
      }
    } else {
      words[index].count++;
    }
    token = strtok(NULL, delimiter);
  }
}

int FindWords(const char *s) {
  for (int i = 0; i < num_of_words; i++)
    if (strcmp(words[i].str, s) == 0)
      return i;
  return -1; // 단어검색 실패
}

void Increase() {
  max_of_words += 10;

  WORD *tmp = words;
  words = new WORD[max_of_words];
  memcpy(words, tmp, sizeof(WORD) * num_of_words);
  delete[] tmp;
}

void ShowWords() {
  for (int i = 0; i < num_of_words; i++)
    cout << words[i].str << " : " << words[i].count << "번 사용\n";
}

void RemoveAll() {
  for (int i = 0; i < num_of_words; i++)
    delete[] words[i].str;
  delete[] words;
}