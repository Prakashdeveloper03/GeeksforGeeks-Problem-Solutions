#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int isPowerOfAnother(long long x, long long y) {
    for (int i = 0; i < 64; i++) {
      if (pow(x, i) == y) {
        return 1;
      }
    }
    return 0;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int X, Y;
    cin >> X >> Y;
    Solution obj;
    cout << obj.isPowerOfAnother(X, Y) << endl;
  }
  return 0;
}