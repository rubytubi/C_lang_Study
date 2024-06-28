#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
  struct NODE *next;
  int data;
};

int main() {
  struct NODE *head = malloc(
      sizeof(struct NODE)); // 연결리스트의 기준점 역할만 하므로 데이터 저장 X

  struct NODE *node1 = malloc(sizeof(struct NODE));
  head->next = node1;
  node1->data = 10;

  struct NODE *node2 = malloc(sizeof(struct NODE));
  node1->next = node2;
  node2->data = 20;

  node2->next = NULL; // 2번쨰 노드 다음에는 노드가 없으므로 NULL 저장

  struct NODE *curr = head->next; // 연결리스트의 모든 노드 순회하는 방법
  while (curr != NULL) {
    printf("%d\n", curr->data);
    curr = curr->next;
  }

  free(node2);
  free(node1);
  free(head);
}
