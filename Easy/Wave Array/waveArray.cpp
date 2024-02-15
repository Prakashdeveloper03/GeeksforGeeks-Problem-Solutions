#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void convertToWave(int n, vector<int> &arr) {
    if (n % 2 == 0) {
      for (int i = 0; i < n; i = i + 2)
        swap(arr[i], arr[i + 1]);
    }

    else {
      for (int i = 0; i < n - 1; i = i + 2) {
        swap(arr[i], arr[i + 1]);
      }
    }
  }
};

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    Solution ob;
    ob.convertToWave(n, a);
    for (int i = 0; i < n; i++)
      cout << a[i] << " ";
    cout << endl;
  }
}