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

class Solution {
public:
  int getCount(struct Node *head) {
    Node *temp = head;
    int length = 0;
    while (temp != NULL) {
      length++;
      temp = temp->next;
    }
    return length;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
      cin >> data;
      tail->next = new Node(data);
      tail = tail->next;
    }
    Solution ob;
    cout << ob.getCount(head) << endl;
  }
  return 0;
}