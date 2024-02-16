#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
public:
  int find_median(vector<int> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 1) {
      return v[n / 2];
    } else {
      return (v[n / 2] + v[n / 2 - 1]) / 2;
    }
  }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    Solution ob;
    int ans = ob.find_median(v);
    cout << ans << "\n";
  }
  return 0;
}