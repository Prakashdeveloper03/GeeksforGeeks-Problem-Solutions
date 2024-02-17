#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void binSort(int A[], int N) {
    int ct = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] == 0) {
        swap(A[ct], A[i]);
        ct++;
      }
    }
  }
};

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    Solution obj;
    obj.binSort(A, N);
    for (int x : A) cout << x << " ";
    cout << endl;
  }
  return 0;
}