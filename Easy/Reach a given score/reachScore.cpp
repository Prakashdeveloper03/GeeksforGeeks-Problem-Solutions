//{ Driver Code Starts
// Driver Code
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution {
 public:
  long long int count(long long int n) {
    int ans = 0;
    for (int i = 0; i <= n / 3; i++) {
      int x = n - i * 3;
      if (x % 5 == 0) ans += (1 + x / 10);
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    Solution obj;
    cout << obj.count(n) << endl;
  }
  return 0;
}