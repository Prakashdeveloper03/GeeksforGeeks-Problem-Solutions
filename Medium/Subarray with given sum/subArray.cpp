#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<int> subarraySum(int arr[], int n, long long s) {
    int l = 0, r = 0;
    vector<int> res;
    int cur_sum = 0;
    cur_sum = cur_sum + arr[r];
    while (r <= n) {
      if (cur_sum == s && l <= r) {
        res.push_back(l + 1);
        res.push_back(r + 1);
        return res;
      } else if (cur_sum < s) {
        r++;
        cur_sum = cur_sum + arr[r];
      } else {
        cur_sum = cur_sum - arr[l];
        l++;
      }
    }
    res.push_back(-1);
    return res;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    long long s;
    cin >> n >> s;
    int arr[n];
    const int mx = 1e9;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    vector<int> res;
    res = ob.subarraySum(arr, n, s);

    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
  }
  return 0;
}