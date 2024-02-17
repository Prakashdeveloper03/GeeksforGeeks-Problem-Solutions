#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int count(int N) {
    int res = abs(sqrt(N));
    return res;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.count(n) << endl;
  }
  return 0;
}