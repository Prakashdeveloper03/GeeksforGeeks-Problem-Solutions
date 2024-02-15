#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void booleanMatrix(vector<vector<int>> &matrix) {
    vector<vector<int>> v;
    v = matrix;
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (v[i][j] == 1) {
          for (int k = 0; k < c; k++) {
            matrix[i][k] = 1;
          }
          for (int k = 0; k < r; k++) {
            matrix[k][j] = 1;
          }
        }
      }
    }
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int row, col;
    cin >> row >> col;
    vector<vector<int>> matrix(row);
    for (int i = 0; i < row; i++) {
      matrix[i].assign(col, 0);
      for (int j = 0; j < col; j++) {
        cin >> matrix[i][j];
      }
    }

    Solution ob;
    ob.booleanMatrix(matrix);

    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}