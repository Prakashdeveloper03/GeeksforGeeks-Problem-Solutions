#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int kThSmallestFactor(int N, int K) {
    set<int> s;
    for (int i = 1; i <= sqrt(N); i++) {
      if (N % i == 0) {
        s.insert(i);
        s.insert(N / i);
      }
    }
    if (s.size() < K) {
      return -1;
    }
    int count = 0, ans;
    for (auto it : s) {
      if (count != K) {
        count++;
        ans = it;
      } else {
        break;
      }
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, K;

    cin >> N >> K;

    Solution ob;
    cout << ob.kThSmallestFactor(N, K) << endl;
  }
  return 0;
}