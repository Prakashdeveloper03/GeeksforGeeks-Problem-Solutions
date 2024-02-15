#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<double> myCalculator(double arr[3][4]) {
    vector<vector<double>> mat(3, vector<double>(3));
    double det = 0;
    for (int i = 0; i < 3; i++) {
      det += (arr[0][i] * ((arr[1][(i + 1) % 3] * arr[2][(i + 2) % 3]) -
                           (arr[1][(i + 2) % 3] * arr[2][(i + 1) % 3])));
    }
    if (!det)
      return {0};
    for (int col = 0; col < 3; col++) {
      for (int row = 0; row < 3; row++) {
        mat[col][row] = ((arr[(row + 1) % 3][(col + 1) % 3] *
                          arr[(row + 2) % 3][(col + 2) % 3]) -
                         (arr[(row + 1) % 3][(col + 2) % 3] *
                          arr[(row + 2) % 3][(col + 1) % 3])) /
                        det;
      }
    }
    vector<double> ans(3);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        ans[i] += mat[i][j] * arr[j][3];
      }
    }
    for (int i = 0; i < 3; i++)
      ans[i] = floor(ans[i]);
    return ans;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    double Arr[3][4];
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 4; j++)
        cin >> Arr[i][j];
    Solution ob;
    vector<double> ans = ob.myCalculator(Arr);
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}