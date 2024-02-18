#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  Node* next;
  Node(int val) {
    data = val;
    next = NULL;
  }
};

Node* inputList(int size) {
  Node *head, *tail;
  int val;

  cin >> val;
  head = tail = new Node(val);

  while (--size) {
    cin >> val;
    tail->next = new Node(val);
    tail = tail->next;
  }

  return head;
}

void printList(Node* n) {
  if (n)
    while (n) {
      cout << n->data << " ";
      n = n->next;
    }
  else
    cout << " ";
}

Node* findIntersection(Node* head1, Node* head2) {
  unordered_map<int, int> mp;

  Node* n1 = head1;
  Node* n2 = head2;

  Node* res = new Node(1);
  Node* res1 = res;

  while (n1) {
    mp[n1->data]++;
    n1 = n1->next;
  }

  while (n2) {
    if (mp[n2->data] >= 1) {
      res->next = n2;
      res = res->next;
      mp[n2->data]--;
    }
    n2 = n2->next;
  }

  res->next = NULL;

  return res1->next;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    Node* head1 = inputList(n);
    Node* head2 = inputList(m);

    Solution ob;
    Node* result = ob.findIntersection(head1, head2);

    printList(result);
    cout << endl;
  }
  return 0;
}