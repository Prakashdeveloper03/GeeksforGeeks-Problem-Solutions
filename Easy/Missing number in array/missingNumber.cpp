#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int MissingNumber(int array[], int n) {
    int total = (n * (n + 1)) / 2;
    for (int i = 0; i < n - 1; i++) {
      total -= array[i];
    }
    return total;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; ++i)
      cin >> arr[i];
    Solution obj;
    cout << obj.MissingNumber(arr, n) << endl;
  }
  return 0;
}