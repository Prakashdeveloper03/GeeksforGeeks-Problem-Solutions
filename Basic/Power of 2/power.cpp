#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isPowerofTwo(long long n) { return (n > 0 && (n & n - 1) == 0); }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    Solution obj;
    if (obj.isPowerofTwo(n))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}