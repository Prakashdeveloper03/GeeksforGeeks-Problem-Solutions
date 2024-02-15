#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int searchInSorted(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while (low <= high) {
      mid = low + (high - low) / 2;
      if (arr[mid] < k)
        low = mid + 1;
      else if (arr[mid] > k)
        high = mid - 1;
      else
        return 1;
    }
    return -1;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int key;
    cin >> key;
    Solution obj;
    cout << obj.searchInSorted(arr, n, key) << endl;
  }
  return 0;
}