#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int countSquares(int N) { return sqrt(N - 1); }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.countSquares(n) << endl;
  }
  return 0;
}