#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  long long reversedBits(long long X) {
    string str = bitset<32>(X).to_string();
    reverse(str.begin(), str.end());
    return stoll(str, 0, 2);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long X;
    cin >> X;
    Solution ob;
    cout << ob.reversedBits(X) << endl;
  }
  return 0;
}