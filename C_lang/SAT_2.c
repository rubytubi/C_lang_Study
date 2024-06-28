#include <stdio.h>

typedef struct Student {
  char name[30];
  char student_id[10];
  int score[3];
} Student;

char cal_grade(Student s) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += s.score[i];
  }
  sum /= 3;
  if (sum >= 90)
    return 'A';
  else if (sum >= 80)
    return 'B';
  else
    return 'C';
}

int main() {
  Student s;

  s = {"LSM", "60202235", {100, 90, 0}};
  printf("%s의 성적은 %c입니다.\n", s.name, cal_grade(s));
}
