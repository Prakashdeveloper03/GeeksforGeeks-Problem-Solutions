#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int negaBit(int F, int S) { return F ^ S; }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int F, S;
    cin >> F >> S;
    Solution obj;
    cout << obj.negaBit(F, S) << endl;
  }
  return 0;
}