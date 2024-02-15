#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long findNth(long long N) {
    long long ans = 0, x = 1;
    while (N) {
      ans += N % 9 * x;
      N /= 9;
      x *= 10;
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, ans;
    cin >> n;
    Solution obj;
    ans = obj.findNth(n);
    cout << ans << endl;
  }
  return 0;
}