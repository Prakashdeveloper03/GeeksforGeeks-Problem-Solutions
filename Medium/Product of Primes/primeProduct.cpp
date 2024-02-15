#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
  const int m = 1e9 + 7;

public:
  bool isprime(int n) {
    if (n <= 1) {
      return false;
    }
    for (int i = 2; i <= (sqrt(n)); i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }

  long long primeProduct(long long L, long long R) {
    long long int ans = 1;
    for (long long int i = L; i <= R; i++) {
      if (isprime(i)) {
        ans = (ans % m) * i;
      }
    }
    return ans % m;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long L, R;
    cin >> L >> R;

    Solution ob;
    cout << ob.primeProduct(L, R) << "\n";
  }
  return 0;
}