#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
  struct NODE *next;
  int data;
};

void addFirst(struct NODE *target, int data) { // target 은 기준노드
  struct NODE *newNode = malloc(sizeof(struct NODE));
  newNode->next =
      target->next; // 새 노드의 다음 노드가 그 다음에 있는 노드를 가르키도록!
  newNode->data = data;

  target->next = newNode; // 기준노드의 다음노드가 새 노드를 가르키도록!
}

int main() {
  struct NODE *head = malloc(sizeof(struct NODE));

  head->next = NULL;

  addFirst(head, 10);
  addFirst(head, 20);
  addFirst(head, 30);

  struct NODE *curr = head->next; // 연결리스트의 순회용 포인터
  while (curr != NULL) {
    printf("%d\n", curr->data); // 반복문 안에서는 현재 노드의 데이터 출력
    curr = curr->next; // 존나 중요 = 현재노드에 계속 다음노드를 가져와서
                       // 순회공연함
  }

  curr = head->next;

  while (curr != NULL) { // 연결리스트를 순회공연 다니면서 각 노드를 free로 해제
    struct NODE *next = curr->next; // curr->next 를 다른 포인터에 임시저장
                                    // 해놓고 free(curr)로 해제
    free(curr);
    curr = next;
  }

  free(head);

  return 0;
}