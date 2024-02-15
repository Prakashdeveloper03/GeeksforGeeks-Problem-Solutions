#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int findCatalan(int n) {
    if (n == 0 || n == 1)
      return 1;
    int u, d, curr = 1;
    for (int i = 1; i < n; i++) {
      u = 2 * i + 1;
      u = 2 * u * curr;
      d = i + 2;
      curr = u / d;
    }
    return curr;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.findCatalan(n) << "\n";
  }
  return 0;
}