#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int trailingZeroes(int n) {
    int ans = 0;
    while (n != 0) {
      ans += (n / 5);
      n = n / 5;
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    int ans = ob.trailingZeroes(N);
    cout << ans << endl;
  }
  return 0;
}