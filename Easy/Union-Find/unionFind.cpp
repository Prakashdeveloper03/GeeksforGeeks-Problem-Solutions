#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int find(int a, int par[]) {
    if (a == par[a]) return a;
    return par[a] = find(par[a], par);
  }

  void union_(int a, int b, int par[], int rank1[]) {
    a = find(a, par), b = find(b, par);
    if (rank1[a] >= rank1[b])
      par[b] = a, rank1[a]++;
    else
      par[a] = b, rank1[b]++;
  }

  bool isConnected(int x, int y, int par[], int rank1[]) {
    return find(x, par) == find(y, par);
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, r;
    cin >> n;
    int par[n + 1];
    int rank1[n + 1];
    for (int i = 0; i < n; i++) {
      par[i] = i;
      rank1[i] = 1;
    }
    Solution obj;
    int q;
    cin >> q;
    while (--q) {
      int a, b;
      char c;
      cin >> c >> a >> b;
      if (c == 'U')
        obj.union_(a, b, par, rank1);
      else
        cout << obj.isConnected(a, b, par, rank1) << endl;
    }
  }
  return 0;
}