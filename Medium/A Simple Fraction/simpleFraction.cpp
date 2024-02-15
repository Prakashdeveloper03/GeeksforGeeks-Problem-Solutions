#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string fractionToDecimal(int numerator, int denominator) {
    int whole = numerator / denominator;
    int decimal = numerator % denominator;
    string ans = to_string(whole);
    if (decimal == 0)
      return ans;
    unordered_map<int, int> mp;
    mp.clear();
    ans += ".";
    while (decimal != 0) {
      if (mp.count(decimal)) {
        ans.insert(mp[decimal], "(");
        ans += ")";
        return ans;
      } else {
        mp[decimal] = ans.length();
        decimal *= 10;
        int q = decimal / denominator;
        decimal = decimal % denominator;
        ans += to_string(q);
      }
    }
    return ans;
  }
};

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int numerator, denominator;
    cin >> numerator >> denominator;
    Solution ob;
    string ans = ob.fractionToDecimal(numerator, denominator);
    cout << ans << "\n";
  }
  return 0;
}