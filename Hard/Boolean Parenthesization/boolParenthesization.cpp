#include <bits/stdc++.h>
using namespace std;
#define MOD 1003
class Solution {
 public:
  int dp[201][201][2];

  int func(int i, int j, int val, string &s) {
    if (i > j) return 0;
    if (i == j) return (val == 1 && s[i] == 'T') || (val == 0 && s[i] == 'F');
    if (dp[i][j][val] != -1) return dp[i][j][val];

    int ways = 0;
    for (int k = i + 1; k < j; k += 2) {
      int lt = func(i, k - 1, 1, s);
      int lf = func(i, k - 1, 0, s);
      int rt = func(k + 1, j, 1, s);
      int rf = func(k + 1, j, 0, s);

      if (s[k] == '&') {
        ways += (val ? ((lt * rt) % MOD)
                     : (((lt * rf) % MOD + (lf * rt) % MOD + (lf * rf) % MOD) %
                        MOD));
      } else if (s[k] == '|') {
        ways +=
            (val ? (((lt * rt) % MOD + (lt * rf) % MOD + (lf * rt) % MOD) % MOD)
                 : ((lf * rf) % MOD));
      } else {
        ways += (val ? (((lt * rf) % MOD + (lf * rt) % MOD) % MOD)
                     : (((lt * rt) % MOD + (lf * rf) % MOD) % MOD));
      }
      ways %= MOD;
    }
    return dp[i][j][val] = ways;
  }

  int countWays(int N, string S) {
    memset(dp, -1, sizeof(dp));
    return func(0, N - 1, 1, S);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    Solution ob;
    cout << ob.countWays(n, s) << "\n";
  }
  return 0;
}