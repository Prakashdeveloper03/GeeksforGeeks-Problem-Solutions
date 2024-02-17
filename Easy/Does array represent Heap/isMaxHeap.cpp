#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  bool isMaxHeap(int arr[], int n) {
    return (n == 1 or (arr[n / 2 - 1] >= arr[n - 1] and isMaxHeap(arr, n - 1)));
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[4 * n] = {0};
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    Solution ob;
    cout << ob.isMaxHeap(a, n) << endl;
  }
  return 0;
}