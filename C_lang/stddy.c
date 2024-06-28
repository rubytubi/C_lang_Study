#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
  struct NODE *next;
  int data;
};

void addFirst(struct NODE *target, int data) { // target = 기준노드
  struct NODE *newNode = malloc(sizeof(struct NODE));
  newNode->next = target->next;
  newNode->data = data;

  target->next = newNode;
}

int main() { struct NODE *head = malloc(sizeof(struct NODE)); }
