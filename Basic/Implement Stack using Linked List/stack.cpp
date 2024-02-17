#include <bits/stdc++.h>
using namespace std;
struct StackNode {
  int data;
  StackNode *next;
  StackNode(int a) {
    data = a;
    next = NULL;
  }
};

class MyStack {
private:
  StackNode *top;

public:
  void push(int);
  int pop();
  MyStack() { top = NULL; }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    MyStack *sq = new MyStack();
    int Q;
    cin >> Q;
    while (Q--) {
      int QueryType = 0;
      cin >> QueryType;
      if (QueryType == 1) {
        int a;
        cin >> a;
        sq->push(a);
      } else if (QueryType == 2) {
        cout << sq->pop() << " ";
      }
    }
    cout << endl;
  }
}

void MyStack ::push(int x) {
  StackNode *const n{new StackNode(x)};
  n->next = top;
  top = n;
}

int MyStack ::pop() {
  if (!top)
    return -1;
  const int x{top->data};
  const StackNode *const n{top};
  top = top->next;
  delete n;
  return x;
}
