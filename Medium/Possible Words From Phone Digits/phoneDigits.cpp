#include <bits/stdc++.h>
using namespace std;
class Solution {
 private:
  void solve(int a[], int i, int n, vector<string> val, string op,
             vector<string> &v) {
    if (i == n) {
      v.push_back(op);
      return;
    }

    for (auto x : val[a[i]]) {
      op.push_back(x);
      solve(a, i + 1, n, val, op, v);
      op.pop_back();
    }
  }

 public:
  vector<string> possibleWords(int a[], int N) {
    vector<string> val = {"",    "",    "abc",  "def", "ghi",
                          "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    solve(a, 0, N, val, "", ans);

    return ans;
  }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
      cin >> a[i];
    }
    Solution obj;
    vector<string> res = obj.possibleWords(a, N);
    for (string i : res) cout << i << " ";
    cout << endl;
  }
  return 0;
}