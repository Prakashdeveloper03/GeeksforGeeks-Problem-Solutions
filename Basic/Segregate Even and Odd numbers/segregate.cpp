#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void segregateEvenOdd(int arr[], int n) {
    vector<int> odd, even;
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 == 0)
        even.push_back(arr[i]);
      else
        odd.push_back(arr[i]);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int i = 0;
    for (; i < even.size(); ++i) arr[i] = even[i];

    for (int j = 0; j < odd.size(); j++, i++) arr[i] = odd[j];
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    ob.segregateEvenOdd(arr, n);
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}