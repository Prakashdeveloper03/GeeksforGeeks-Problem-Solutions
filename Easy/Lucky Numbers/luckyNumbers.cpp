#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool isLucky(int n) {
    for (int i = 2; i <= n; i++) {
      if (n % i == 0)
        return false;
      if (i > n)
        return true;
      n -= (n / i);
    }
  }
};

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    Solution obj;
    if (obj.isLucky(n))
      cout << "1\n";
    else
      cout << "0\n";
  }
}