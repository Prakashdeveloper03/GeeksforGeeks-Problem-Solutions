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

class Solution {
 public:
  Node* reverseList(Node* head) {
    Node* temp = NULL;
    while (head != NULL) {
      Node* curr = head->next;
      head->next = temp;
      temp = head;
      head = curr;
    }
    return temp;
  }
  Node* addTwoLists(Node* first, Node* second) {
    Node* dummyHead = new Node(0);
    Node* tail = dummyHead;
    int carry = 0;
    first = reverseList(first);
    second = reverseList(second);
    while (first != nullptr || second != nullptr || carry != 0) {
      int digit1 = (first != nullptr) ? first->data : 0;
      int digit2 = (second != nullptr) ? second->data : 0;

      int sum = digit1 + digit2 + carry;
      int digit = sum % 10;
      carry = sum / 10;

      Node* newNode = new Node(digit);
      tail->next = newNode;
      tail = tail->next;

      first = (first != nullptr) ? first->next : nullptr;
      second = (second != nullptr) ? second->next : nullptr;
    }

    Node* result = dummyHead->next;
    delete dummyHead;
    return reverseList(result);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;

    cin >> n;
    Node* first = buildList(n);

    cin >> m;
    Node* second = buildList(m);
    Solution ob;
    Node* res = ob.addTwoLists(first, second);
    printList(res);
  }
  return 0;
}