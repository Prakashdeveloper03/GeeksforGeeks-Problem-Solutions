#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(struct Node *head, int n);

class Solution {
 public:
  int getNthFromLast(Node *head, int n) {
    int length = 0;
    for (Node *curr = head; curr != NULL; curr = curr->next) {
      length++;
    }
    if (length < n) return -1;
    Node *curr = head;
    for (int i = 1; i < length - n + 1; i++) curr = curr->next;
    return curr->data;
  }
};

int main() {
  int T, i, n, l, k;

  cin >> T;

  while (T--) {
    struct Node *head = NULL, *tail = NULL;

    cin >> n >> k;
    int firstdata;
    cin >> firstdata;
    head = new Node(firstdata);
    tail = head;
    for (i = 1; i < n; i++) {
      cin >> l;
      tail->next = new Node(l);
      tail = tail->next;
    }
    Solution obj;
    cout << obj.getNthFromLast(head, k) << endl;
  }
  return 0;
}