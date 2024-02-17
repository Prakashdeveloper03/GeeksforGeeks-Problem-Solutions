#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<long long> printFibb(int n) {
    vector<long long> ans(n);
    ans[0] = 1;
    ans[1] = 1;
    for (int i = 2; i < n; i++) {
      ans[i] = ans[i - 2] + ans[i - 1];
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution obj;
    vector<long long> ans = obj.printFibb(n);
    for (long long i : ans) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}