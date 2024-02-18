#include <bits/stdc++.h>
using namespace std;
class Array {
 public:
  template <class T>
  static void input(vector<T> &A, int n) {
    for (int i = 0; i < n; i++) {
      scanf("%d ", &A[i]);
    }
  }

  template <class T>
  static void print(vector<T> &A) {
    for (int i = 0; i < A.size(); i++) {
      cout << A[i] << " ";
    }
    cout << endl;
  }
};

class Solution {
 public:
  int getMaximum(int N, vector<int> &arr) {
    long long sum = accumulate(arr.begin(), arr.end(), 0ll);
    for (int i = N; i >= 1; i--) {
      if (sum % i == 0) return i;
    }
  }
};

int main() {
  int t;
  scanf("%d ", &t);
  while (t--) {
    int N;
    scanf("%d", &N);

    vector<int> arr(N);
    Array::input(arr, N);

    Solution obj;
    int res = obj.getMaximum(N, arr);

    cout << res << endl;
  }
}