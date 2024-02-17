#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int singleElement(int arr[], int N) {
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++) {
      mp[arr[i]]++;
    }
    for (int i = 0; i < N; i++) {
      if (mp[arr[i]] == 1) return arr[i];
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;

    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) cin >> arr[i];

    Solution ob;
    cout << ob.singleElement(arr, N);
    cout << "\n";
  }
  return 0;
}