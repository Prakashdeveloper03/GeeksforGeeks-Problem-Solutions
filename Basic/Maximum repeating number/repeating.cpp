#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int maxRepeating(int *arr, int n, int k) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
      mp[arr[i]]++;
    }
    int num = -1, max = -1;
    for (auto it : mp) {
      if (it.second >= max) {
        if (it.second == max)
          num = min(it.first, num);
        else
          num = it.first;

        max = it.second;
      }
    }
    return num;
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
    auto ans = ob.maxRepeating(arr, n, k);
    cout << ans << "\n";
  }
  return 0;
}