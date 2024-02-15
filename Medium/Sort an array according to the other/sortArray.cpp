#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> sortA1ByA2(vector<int> A1, int n, vector<int> A2, int m) {
    vector<int> ans;
    map<int, int> map1;
    for (int i = 0; i < n; i++) {
      map1[A1[i]]++;
    }

    for (int i = 0; i < m; i++) {
      if (map1.find(A2[i]) != map1.end()) {
        while (map1[A2[i]]--) {
          ans.push_back(A2[i]);
        }
        map1.erase(A2[i]);
      }
    }

    for (auto x : map1) {
      int val = x.second;
      int key = x.first;
      while (val--) {

        ans.push_back(key);
      }
    }

    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, i;
    cin >> n >> m;
    vector<int> a1(n);
    vector<int> a2(n);
    for (int i = 0; i < n; i++) {
      cin >> a1[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> a2[i];
    }
    Solution obj;
    vector<int> res = obj.sortA1ByA2(a1, n, a2, m);
    for (i = 0; i < n; i++) {
      cout << res[i] << " ";
    }
    cout << endl;
  }
  return 0;
}