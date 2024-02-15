#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  long long int floorSqrt(long long int x) {
    long long int low = 1, high = x, mid, ans;
    while (low <= high) {
      mid = low + (high - low) / 2;
      if (mid * mid == x) {
        return mid;
      } else if (mid * mid > x) {
        high = mid - 1;
      } else {
        ans = mid;
        low = mid + 1;
      }
    }
    return ans;
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