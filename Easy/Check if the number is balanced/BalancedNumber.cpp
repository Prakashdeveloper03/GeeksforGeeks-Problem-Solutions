#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool balancedNumber(string N) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N.length() / 2; i++) {
      sum1 += int(N[i] - '0');
      sum2 += int(N[N.length() - 1 - i] - '0');
    }
    if (sum1 == sum2)
      return true;
    else
      return false;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string N;
    cin >> N;
    Solution ob;
    cout << ob.balancedNumber(N) << endl;
  }
  return 0;
}