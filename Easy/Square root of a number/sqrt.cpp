#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long int floorSqrt(long long int x) {
    long long int s = floor(sqrt(x));
    return s;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    Solution obj;
    cout << obj.floorSqrt(n) << endl;
  }
  return 0;
}