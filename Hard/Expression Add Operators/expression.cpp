#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<string> ans;
  string s;
  int target;
  vector<string> addOperators(string S, int target) {
    this->target = target;
    this->s = S;
    gen_exp(0, 0, 0, "");
    return ans;
  }
  void gen_exp(int ind, long prev, long val, string ex) {
    if (ind == s.size()) {
      if (val == target) ans.push_back(ex);
      return;
    }
    int n = s.size();
    string ns = "";
    int curr = 0;
    for (int i = ind; i < n; i++) {
      if (i > ind and s[ind] == '0') return;
      ns += s[i];
      curr = curr * 10 + s[i] - '0';
      if (ind == 0) {
        gen_exp(i + 1, curr, curr, ex + ns);
        continue;
      }

      gen_exp(i + 1, curr, val + curr, ex + "+" + ns);
      gen_exp(i + 1, -curr, val - curr, ex + "-" + ns);
      gen_exp(i + 1, prev * curr, val - prev + prev * curr, ex + "*" + ns);
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int target;
    string S;
    cin >> S >> target;
    Solution obj;
    vector<string> ans = obj.addOperators(S, target);
    sort(ans.begin(), ans.end());
    for (auto &it : ans) cout << it << ' ';
    cout << endl;
  }
  return 0;
}