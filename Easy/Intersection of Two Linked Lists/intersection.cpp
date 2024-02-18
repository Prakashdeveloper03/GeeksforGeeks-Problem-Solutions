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
  while (n) {
    cout << n->data << " ";
    n = n->next;
  }
}

class Solution {
 public:
  Node* findIntersection(Node* head1, Node* head2) {
    unordered_set<int> s1;
    Node* curr1 = head1;
    Node* curr2 = head2;
    while (curr2) {
      s1.insert(curr2->data);
      curr2 = curr2->next;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    while (curr1) {
      if (s1.find(curr1->data) != s1.end()) {
        temp->next = new Node(curr1->data);
        temp = temp->next;
      }
      curr1 = curr1->next;
    }

    return ans->next;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;

    cin >> n;
    Node* head1 = inputList(n);

    cin >> m;
    Node* head2 = inputList(m);
    Solution obj;
    Node* result = obj.findIntersection(head1, head2);

    printList(result);
    cout << endl;
  }
  return 0;
}