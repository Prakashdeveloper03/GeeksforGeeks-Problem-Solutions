#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int inSequence(int A, int B, int C) {
    if (C == 0)
      return A == B;
    return ((B - A) / C) >= 0 && ((B - A) % C) == 0;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int A, B, C;
    cin >> A >> B >> C;

    Solution ob;
    cout << ob.inSequence(A, B, C) << endl;
  }
  return 0;
}