#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int LargButMinFreq(int arr[], int n) {
    map<int, int> mp;
    for (int i = 0; i < n; i++) mp[arr[i]]++;
    int prev = -1;
    mp[prev] = n + 1;
    for (auto it : mp)
      if (it.first >= prev and mp[prev] >= it.second) prev = it.first;
    return prev;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    Solution ob;
    cout << ob.LargButMinFreq(arr, n) << endl;
  }
}