#include <bits/stdc++.h>
using namespace std;
class twoStacks {
  int cap;
  int *arr;
  int top1;
  int top2;

 public:
  twoStacks() {
    int n = 100;
    cap = n;
    arr = new int[n];
    top1 = -1;
    top2 = n;
  }

  void push1(int x) {
    if (((top1 + 1) == top2) || ((top1 + 1) == cap)) return;
    top1++;
    arr[top1] = x;
  }

  void push2(int x) {
    if (((top2 - 1) == top1) || (top2 == 0)) return;
    top2--;
    arr[top2] = x;
  }

  int pop1() {
    if (top1 == -1) return -1;
    int res = arr[top1];
    top1--;
    return res;
  }

  int pop2() {
    if (top2 == cap) return -1;
    int res = arr[top2];
    top2++;
    return res;
  }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    twoStacks *sq = new twoStacks();

    int Q;
    cin >> Q;
    while (Q--) {
      int stack_no;
      cin >> stack_no;
      int QueryType = 0;
      cin >> QueryType;

      if (QueryType == 1) {
        int a;
        cin >> a;
        if (stack_no == 1)
          sq->push1(a);
        else if (stack_no == 2)
          sq->push2(a);
      } else if (QueryType == 2) {
        if (stack_no == 1)
          cout << sq->pop1() << " ";
        else if (stack_no == 2)
          cout << sq->pop2() << " ";
      }
    }
    cout << endl;
  }
}