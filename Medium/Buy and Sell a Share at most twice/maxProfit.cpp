#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int maxProfit(vector<int>& price) {
    int n = price.size();
    int s1 = 0, s2 = 0;
    int b1 = INT_MAX;
    int b2 = INT_MAX;
    for (int i = 0; i < n; i++) {
      int cur = price[i];
      b1 = min(b1, cur);
      s1 = max(s1, cur - b1);
      b2 = min(b2, cur - s1);
      s2 = max(s2, cur - b2);
    }
    return s2;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++) cin >> price[i];
    Solution obj;
    cout << obj.maxProfit(price) << endl;
  }
}