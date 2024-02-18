#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void rotateby90(vector<vector<int> >& matrix, int n) {
    for (int i = 0; i < n / 2; i++) {
      for (int j = i; j < n - i - 1; j++) {
        swap(matrix[i][j], matrix[j][n - 1 - i]);
        swap(matrix[j][n - 1 - i], matrix[n - 1 - i][n - 1 - j]);
        swap(matrix[n - 1 - i][n - 1 - j], matrix[n - 1 - j][i]);
      }
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<vector<int> > matrix(n);

    for (int i = 0; i < n; i++) {
      matrix[i].assign(n, 0);
      for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
      }
    }
    Solution ob;
    ob.rotateby90(matrix, n);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) cout << matrix[i][j] << " ";
    cout << endl;
  }
  return 0;
}