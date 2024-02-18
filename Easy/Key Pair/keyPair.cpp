#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  bool hasArrayTwoCandidates(int arr[], int n, int x) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
      int complement = x - arr[i];
      if (seen.find(complement) != seen.end()) {
        return true;
      }
      seen.insert(arr[i]);
    }
    return false;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.hasArrayTwoCandidates(arr, n, x);
    cout << (ans ? "Yes\n" : "No\n");
  }
  return 0;
}