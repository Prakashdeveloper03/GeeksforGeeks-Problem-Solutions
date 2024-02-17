#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  string removeKdigits(string S, int K) {
    if (K >= S.size()) {
      return "0";
    }
    string ans = "";
    stack<char> st;
    for (int i = 0; i < S.size(); i++) {
      while (!st.empty() and K > 0 and st.top() > S[i]) {
        st.pop();
        K--;
      }

      if (!st.empty() or S[i] != '0') {
        st.push(S[i]);
      }
    }
    while (K > 0 and !st.empty()) {
      st.pop();
      K--;
    }
    if (st.empty()) {
      return "0";
    } else {
      while (!st.empty()) {
        ans += st.top();
        st.pop();
      }
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string S;
    cin >> S;
    int K;
    cin >> K;
    Solution obj;
    cout << obj.removeKdigits(S, K) << endl;
  }
  return 0;
}