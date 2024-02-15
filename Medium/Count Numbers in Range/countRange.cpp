#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int prime(int num) {
    int i, limit;
    limit = sqrt(num);
    if (num == 1)
      return 0;
    if (num == 2)
      return 1;
    for (i = 2; i <= limit; i++) {
      if (num % i == 0) {
        return 0;
      }
    }
    if (i > limit) {
      return 1;
    }
  }

  int count3DivNums(long long L, long long R) {
    int res = 0;
    for (int i = 1; i * i <= R; i++) {
      int a = i * i;
      if (prime(i) && (L <= a && a <= R)) {
        res++;
      }
    }
    return res;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long L, R;
    cin >> L >> R;
    Solution ob;
    cout << ob.count3DivNums(L, R) << endl;
  }
  return 0;
}