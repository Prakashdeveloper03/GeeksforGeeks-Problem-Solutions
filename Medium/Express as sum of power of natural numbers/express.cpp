#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int numOfWays(int n, int x) {
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(n, x, 1, dp);
  }

  long long solve(int n, int x, int a, vector<vector<int>>& dp) {
    if (n == 0) return 1;
    int value = 1;
    for (int i = 0; i < x; i++) value *= a;
    if (value > n) return 0;
    if (dp[n][a] != -1) return dp[n][a];
    int mod = 1e9 + 7;
    return dp[n][a] =
               (solve(n, x, a + 1, dp) + solve(n - value, x, a + 1, dp)) % mod;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    Solution ob;
    cout << ob.numOfWays(n, x) << endl;
  }
  return 0;
}