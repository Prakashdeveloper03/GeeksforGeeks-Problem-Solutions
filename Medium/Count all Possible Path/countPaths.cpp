#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int isPossible(vector<vector<int>> paths) {
    for (auto path : paths) {
      if (accumulate(path.begin(), path.end(), 0) % 2 != 0)
        return false;
    }
    return true;
  }
};

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<vector<int>> paths(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        cin >> paths[i][j];
    }
    Solution obj;
    int ans = obj.isPossible(paths);
    cout << ans << "\n";
  }
  return 0;
}