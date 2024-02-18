#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node* next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
 public:
  struct Node* makeUnion(struct Node* head1, struct Node* head2) {
    map<int, int> mp;
    Node* n1 = head1;
    Node* n2 = head2;
    Node* res = new Node(1);
    Node* ans = res;

    while (n1) {
      mp[n1->data]++;
      n1 = n1->next;
    }

    while (n2) {
      if (mp.find(n2->data) == mp.end()) {
        mp[n2->data]++;
      }
      n2 = n2->next;
    }

    for (auto rp : mp) {
      ans->next = new Node(rp.first);
      ans = ans->next;
    }

    return res->next;
  }
};

struct Node* buildList(int size) {
  int val;
  cin >> val;

  Node* head = new Node(val);
  Node* tail = head;

  for (int i = 0; i < size - 1; i++) {
    cin >> val;
    tail->next = new Node(val);
    tail = tail->next;
  }

  return head;
}

void printList(Node* n) {
  while (n) {
    cout << n->data << " ";
    n = n->next;
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;

    cin >> n;
    Node* first = buildList(n);

    cin >> m;
    Node* second = buildList(m);
    Solution obj;
    Node* head = obj.makeUnion(first, second);
    printList(head);
  }
  return 0;
}