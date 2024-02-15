#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  stack<int> Reverse(stack<int> st) {
    stack<int> s1;
    reverse(st, s1);
    return s1;
  }

  void reverse(stack<int> st, stack<int> &s1) {
    if (st.empty())
      return;
    int a = st.top();
    st.pop();
    s1.push(a);
    reverse(st, s1);
  }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    stack<int> St;
    for (int i = 0; i < N; i++) {
      int x;
      cin >> x;
      St.push(x);
    }
    Solution ob;
    stack<int> ans = ob.Reverse(St);
    vector<int> res;
    while (ans.size()) {
      res.push_back(ans.top());
      ans.pop();
    }
    for (int i = res.size() - 1; i >= 0; i--) {
      cout << res[i] << " ";
    }
    cout << endl;
  }
}