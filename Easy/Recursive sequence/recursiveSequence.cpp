#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  long long sequence(int n) {
    long long result;
    int count = 1, mod = 1000000007;
    for (int i = 1; i <= n; i++) {
      long mul = 1;
      for (int j = 1; j <= i; j++) {
        mul = (mul * (count++)) % mod;
      }
      result = (result + mul) % mod;
    }
    return result;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    cout << ob.sequence(N) << endl;
  }
  return 0;
}