#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int findMaximum(int arr[], int n) { return *max_element(arr, arr + n); }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.findMaximum(arr, n);
    cout << ans << "\n";
  }
  return 0;
}