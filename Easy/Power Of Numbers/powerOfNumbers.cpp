#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long power(int N, int R) {
    long long const m = 1000000007;
    if (R == 0)
      return 1;
    long long res = power(N, R / 2);
    res = ((res % m) * (res % m)) % m;
    if (R % 2 == 0)
      return res;
    return (res * (N)) % m;
  }
};

long long rev(long long n) {
  long long rev_num = 0;
  while (n > 0) {
    rev_num = rev_num * 10 + n % 10;
    n = n / 10;
  }
  return rev_num;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, r;
    cin >> n;
    r = rev(n);
    Solution obj;
    cout << obj.power(n, r) << endl;
  }
  return 0;
}