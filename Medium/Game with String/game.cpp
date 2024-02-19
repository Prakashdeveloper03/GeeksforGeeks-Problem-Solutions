#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int minValue(string s, int k) {
    unordered_map<char, int> mp;
    priority_queue<int> pq;
    for (auto ch : s) {
      mp[ch]++;
    }
    for (auto it : mp) {
      pq.push(it.second);
    }
    while (k-- && !pq.empty()) {
      int top = pq.top();
      pq.pop();
      if (top > 1) {
        pq.push(top - 1);
      }
    }
    int ans = 0;
    while (!pq.empty()) {
      int count = pq.top();
      pq.pop();
      ans += count * count;
    }
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int k;
    cin >> s >> k;

    Solution ob;
    cout << ob.minValue(s, k) << "\n";
  }
  return 0;
}