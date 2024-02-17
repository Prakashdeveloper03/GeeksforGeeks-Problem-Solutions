#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int subsequenceSum(string s) {
    int sum = 0, n = s.size();
    for (int i = 0; i < n; i++) sum += s[i] - '0';
    return sum * (1 << n - 1);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.subsequenceSum(s) << endl;
  }
  return 0;
}