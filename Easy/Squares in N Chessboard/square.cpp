#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long squaresInChessBoard(long long N) {
    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
      sum += i * i;
    }
    return sum;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long N;
    cin >> N;
    Solution ob;
    cout << ob.squaresInChessBoard(N) << endl;
  }
  return 0;
}