#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int binarysearch(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
      int mid = (low + high) / 2;
      if (arr[mid] == k)
        return mid;
      if (k > arr[mid])
        low = mid + 1;
      if (k < arr[mid])
        high = mid - 1;
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
    int arr[100];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int key;
    cin >> key;
    Solution obj;
    cout << obj.binarysearch(arr, n, key) << endl;
  }
  return 0;
}