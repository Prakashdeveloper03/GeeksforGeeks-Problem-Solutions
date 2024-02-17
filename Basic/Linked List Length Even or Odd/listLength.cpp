#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

int isLengthEvenOrOdd(struct Node *head);

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, tmp, first, i, l;
    struct Node *head = NULL, *tail = NULL;
    cin >> n;
    cin >> first;
    head = new Node(first);
    tail = head;
    for (i = 0; i < n - 1; i++) {
      cin >> l;
      tail->next = new Node(l);
      tail = tail->next;
    }
    if (isLengthEvenOrOdd(head) == 0)
      cout << "Even\n";
    else
      cout << "Odd\n";
  }
  return 0;
}

int isLengthEvenOrOdd(struct Node *head) {
  struct Node *currentNode = head;
  int nodeCount = 0;
  while (currentNode != NULL) {
    nodeCount++;
    currentNode = currentNode->next;
  }
  return nodeCount % 2 != 0;
}