#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void arrreverse(int i, int j, int arr[]) {
    while (i < j) {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  void rotateArr(int arr[], int d, int n) {
    d = d % n;
    arrreverse(0, d - 1, arr);
    arrreverse(d, n - 1, arr);
    arrreverse(0, n - 1, arr);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    ob.rotateArr(arr, d, n);
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  return 0;
}