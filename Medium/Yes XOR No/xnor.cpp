#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  string yesXorNo(int N, long long A[], long long B[]) { return "Yes"; }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    long long A[N], B[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    Solution ob;
    cout << ob.yesXorNo(N, A, B) << endl;
  }
  return 0;
}