#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long int prime_Sum(int n) {
    long long int sum = 0;
    int a[n + 1];

    for (int g = 1; g <= n; g++) {
      a[g] = 0;
    }

    for (int i = 2; i < sqrt(n) + 1; i++) {
      for (int j = 2; j < n / i + 1; j++) {
        a[i * j] = 1;
      }
    }

    for (int g = 2; g <= n; g++) {
      if (a[g] == 0) sum = sum + g;
    }

    return sum;
  }
};

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    Solution ob;
    long long int ans = ob.prime_Sum(n);
    cout << ans << "\n";
  }
  return 0;
}