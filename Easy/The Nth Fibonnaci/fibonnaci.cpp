#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int fib(int N) {
    if (N == 0) {
      return 0;
    } else {
      int n1 = 0, n2 = 1, n3 = 0;
      for (int i = 0; i < N; i++) {
        n3 = (n1 + n2) % 10;
        n2 = n1;
        n1 = n3;
      }
      return n3;
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    cout << ob.fib(N) << endl;
  }
  return 0;
}