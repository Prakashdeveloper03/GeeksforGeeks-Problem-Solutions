#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    int ans = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
      if (mp.find(k - arr[i]) != mp.end()) {
        ans += mp[k - arr[i]];
      }
      mp[arr[i]]++;
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getPairsCount(arr, n, k);
    cout << ans << "\n";
  }
  return 0;
}