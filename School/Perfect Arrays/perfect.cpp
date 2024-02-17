#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  bool IsPerfect(int a[], int n) {
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
      if (a[j] != a[i]) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    Solution ob;
    if (ob.IsPerfect(a, n))
      cout << "PERFECT\n";
    else
      cout << "NOT PERFECT\n";
  }
}