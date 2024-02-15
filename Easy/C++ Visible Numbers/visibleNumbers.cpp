#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> compute(int arr[], int n) {
    unordered_map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      mp[arr[i]]++;
    }

    for (auto x : mp) {
      if (x.second > floor(n / 3)) {
        v.push_back(x.first);
      }
    }
    sort(v.begin(), v.end());
    return v;
  }
};

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
      cin >> arr[j];

    vector<int> v;
    Solution ob;
    v = ob.compute(arr, n);
    if (v.size() == 0)
      v.push_back(-1);
    for (int i : v)
      cout << i << " ";

    cout << endl;
  }
  return 0;
}