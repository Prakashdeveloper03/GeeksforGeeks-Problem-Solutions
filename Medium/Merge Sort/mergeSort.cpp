#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  void merge(int input[], int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    int k = start;
    int arr[end + 1];

    while (i <= mid && j <= end) {
      if (input[i] > input[j]) {
        arr[k] = input[j++];
      } else {
        arr[k] = input[i++];
      }
      k++;
    }

    if (j > end) {
      while (i <= mid) {
        arr[k++] = input[i++];
      }
    } else {
      while (j <= end) {
        arr[k++] = input[j++];
      }
    }

    for (int m = start; m <= end; m++) {
      input[m] = arr[m];
    }
  }

  void mergeSort(int input[], int i, int j) {
    if (i < j) {
      int mid = (i + j) / 2;
      mergeSort(input, i, mid);
      mergeSort(input, mid + 1, j);
      merge(input, i, mid, j);
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution obj;
    obj.mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
  return 0;
}