// int형 배열을 동적으로 생성하고 해제함.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  int *a;
  int na;
  printf("요소 개수: ");
  scanf("%d", &na);

  a = (int *)calloc(na, sizeof(int));

  if (a == NULL)
    puts("메모리 확보에 실패했습니다.");
  else {
    printf("%d개의 정수를 입력하세요.\n", na);
    for (i = 0; i < na; i++) {
      printf("a[%d] : ", i);
      scanf("%d", &a[i]);
    }
    printf("각 요솟값은 아래와 같습니다.\n");
    for (i = 0; i < na; i++)
      printf("a[%d] = %d\n", i, a[i]);

    free(a);
  }
  return 0;
}
