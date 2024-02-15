#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxValue(int A, int B) {
    try {
      if (B == 0) {
        throw 0;
      } else {
        return max(A * B, max(A + B, max(A - B, A / B)));
      }
    } catch (int i) {
      return -999999;
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int A, B;
    cin >> A >> B;

    Solution ob;
    int ans = ob.maxValue(A, B);
    if (ans == -999999)
      cout << "inf\n";
    else
      cout << ans << "\n";
  }
  return 0;
}