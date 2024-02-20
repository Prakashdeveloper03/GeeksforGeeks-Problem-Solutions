#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int wordBreak(string A, vector<string> &B) {
    int n = A.length();
    unordered_set<string> dict(B.begin(), B.end());
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i <= n; ++i) {
      for (int j = i - 1; j >= 0; --j) {
        if (dp[j]) {
          string word = A.substr(j, i - j);
          if (dict.find(word) != dict.end()) {
            dp[i] = true;
            break;
          }
        }
      }
    }
    return dp[n] ? 1 : 0;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> dict;
    for (int i = 0; i < n; i++) {
      string S;
      cin >> S;
      dict.push_back(S);
    }
    string line;
    cin >> line;
    Solution ob;
    cout << ob.wordBreak(line, dict) << "\n";
  }
}