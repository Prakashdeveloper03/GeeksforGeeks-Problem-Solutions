#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int isPerfectNumber(long long N) {
    int sum = 1;
    if (N == 1) return 0;
    for (int i = 2; i <= sqrt(N); i++) {
      if (N % i == 0) {
        sum += i;
        sum += N / i;
      }
    }
    if (sum == N) return 1;
    return 0;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    Solution obj;
    cout << obj.isPerfectNumber(n) << endl;
  }
  return 0;
}