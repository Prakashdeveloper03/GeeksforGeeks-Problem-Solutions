#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int maxProfit(int K, int N, int A[]) {
    vector<vector<int>> dp(K + 1, vector<int>(N, 0));
    for (int i = 1; i <= K; i++) {
      int maxDiff = dp[i - 1][0] - A[0];
      for (int j = 1; j < N; j++) {
        dp[i][j] = max(dp[i][j - 1], maxDiff + A[j]);
        maxDiff = max(maxDiff, dp[i - 1][j] - A[j]);
      }
    }
    return dp[K][N - 1];
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, K;
    cin >> K;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    Solution ob;
    cout << ob.maxProfit(K, N, A) << endl;
  }
  return 0;
}