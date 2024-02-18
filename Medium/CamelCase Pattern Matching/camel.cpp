#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<string> CamelCase(int N, vector<string> Dictionary, string Pat) {
    vector<string> ans;
    string curr;
    int ind;
    for (string s : Dictionary) {
      curr = "";
      ind = 0;
      for (char c : s) {
        if (c < 95) {
          curr += c;
          if (Pat == curr) {
            ans.push_back(s);
            break;
          }
          if (Pat[ind] != c) break;
          ind++;
        }
      }
    }
    if (ans.empty()) ans.push_back("-1");
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    vector<string> Dictionary(N);
    for (int i = 0; i < N; i++) cin >> Dictionary[i];
    string Pattern;
    cin >> Pattern;
    Solution ob;
    vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
    sort(ans.begin(), ans.end());
    for (auto u : ans) cout << u << " ";
    cout << "\n";
  }
  return 0;
}