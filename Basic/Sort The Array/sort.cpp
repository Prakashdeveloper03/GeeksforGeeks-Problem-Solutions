#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<int> sortArr(vector<int> arr, int n) {
    sort(arr.begin(), arr.end());
    return arr;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    Solution ob;
    vector<int> v = ob.sortArr(s, n);
    for (auto i : v) cout << i << ' ';
    cout << endl;
  }
  return 0;
}