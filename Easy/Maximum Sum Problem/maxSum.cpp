#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int maxSum(int n) {
    return (n == 0) ? 0 : max(maxSum(n / 2) + maxSum(n / 3) + maxSum(n / 4), n);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution ob;
    cout << ob.maxSum(n) << "\n";
  }
  return 0;
}