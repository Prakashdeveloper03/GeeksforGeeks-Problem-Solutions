#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minSwaps(vector<int> &nums) {
    vector<pair<int, int>> V;
    for (int i = 0; i < nums.size(); i++) {
      V.push_back({nums[i], i});
    }
    sort(V.begin(), V.end());
    int cnt = 0;
    for (int i = 0; i < V.size(); i++) {
      if (V[i].second == i)
        continue;
      else {
        swap(V[i], V[V[i].second]);
        i--;
        cnt++;
      }
    }
    return cnt;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    Solution obj;
    int ans = obj.minSwaps(nums);
    cout << ans << endl;
  }
  return 0;
}