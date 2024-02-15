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

class Solution {
public:
  struct Node *reverseList(struct Node *head) {
    if (head == NULL || head->next == NULL) {
      return head;
    }
    Node *newhead = reverseList(head->next);
    Node *headnext = head->next;
    headnext->next = head;
    head->next = NULL;
    return newhead;
  }
};

void printList(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

int main() {
  int T, n, l, firstdata;
  cin >> T;

  while (T--) {
    struct Node *head = NULL, *tail = NULL;

    cin >> n;

    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;

    for (int i = 1; i < n; i++) {
      cin >> l;
      tail->next = new Node(l);
      tail = tail->next;
    }

    Solution ob;
    head = ob.reverseList(head);

    printList(head);
    cout << endl;
  }
  return 0;
}