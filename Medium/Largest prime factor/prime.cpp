#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  bool isPrime(int n) {
    if (n <= 1) {
      return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
  long long int largestPrimeFactor(int N) {
    vector<int> factor;
    int ans = 0;
    if (isPrime(N) == true) {
      return N;
    }
    if (isPrime(N) == false) {
      for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
          isPrime(i);
          if (isPrime(i) == true) {
            factor.push_back(i);
          }
        }
      }
    }
    ans = *max_element(factor.begin(), factor.end());
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    cout << ob.largestPrimeFactor(N) << endl;
  }
  return 0;
}