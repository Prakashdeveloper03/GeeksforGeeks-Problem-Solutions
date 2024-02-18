#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long sumMatrix(long long n, long long q) {
    if (2 * n < q) {
      return 0;
    }
    return (n - abs((n + 1) - q));
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, q;

    cin >> n >> q;

    Solution ob;
    cout << ob.sumMatrix(n, q) << endl;
  }
  return 0;
}