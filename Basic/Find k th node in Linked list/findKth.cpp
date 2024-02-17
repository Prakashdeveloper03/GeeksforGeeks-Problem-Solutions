#include <bits/stdc++.h>
using namespace std;

int fractional_node(struct Node *head, int k);

struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    Node *ptr, *start = NULL, *ptr1;
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++) {
      int value;
      cin >> value;

      ptr = new Node(value);

      if (start == NULL) {
        start = ptr;
        ptr1 = ptr;
      } else {
        ptr1->next = ptr;
        ptr1 = ptr1->next;
      }
    }
    ptr1->next = NULL;
    int k;
    cin >> k;
    int p = fractional_node(start, k);
    cout << p << endl;
  }
}

int fractional_node(struct Node *head, int k) {
  struct Node *currentNode = head;
  int nodeCount = 0;
  while (currentNode != NULL) {
    nodeCount++;
    currentNode = currentNode->next;
  }
  int step = ceil((float)nodeCount / (float)k);
  currentNode = head;
  for (int i = 1; i < step && currentNode != NULL; i++) {
    currentNode = currentNode->next;
  }
  return currentNode->data;
}