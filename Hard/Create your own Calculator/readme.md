# Create your own Calculator
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given the co-effecients of X,Y and Z in a system of simultaneous equations. Find the values of X,Y and Z.
```
 a1X + b1Y + c1Z = d1
 a2X + b2Y + c2Z = d2
 a3X + b3Y + c3Z = d3
```

__Example 1:__
```
Input:
arr = {{5, 4, 2, 0},
       {1, 4, 2, 0},
       {4, 2, 9, 0}}
Output: {0, 0, 0}
Explanation: After calculating with these
given coefficient the value of X, Y, Z is
0, 0, 0.
```
__Example 2:__
```
Input:
arr = {{4.2, 6, 7, 10},
       {1, 2, 3, 12},
       {3, 2, 2, 20}}
Output: {3, 4, -1}
Explanation: After calculating with these
given coefficient the value of X, Y, Z is
3, 4, -1.
```
__Your Task__

You dont need to read input or print anything. Complete the function **myCalculator()** which takes Arr as input parameter and returns 0 in case the system is inconsistent and 1 in case the system is consistent and has infinitely many solutions. In case the system is consistent and has a unique solution, return 3 space separated integers denoting the floor values of X, Y and Z respectively.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- -100 <= arr[i][j] <=100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<double> myCalculator(double arr[3][4])
    {
        vector<vector<double>> mat(3, vector<double>(3));
        double det = 0;
        for (int i = 0; i < 3; i++)
        {
            det += (arr[0][i] * ((arr[1][(i + 1) % 3] * arr[2][(i + 2) % 3]) - (arr[1][(i + 2) % 3] * arr[2][(i + 1) % 3])));
        }
        if (!det)
            return {0};
        for (int col = 0; col < 3; col++)
        {
            for (int row = 0; row < 3; row++)
            {
                mat[col][row] = ((arr[(row + 1) % 3][(col + 1) % 3] * arr[(row + 2) % 3][(col + 2) % 3]) - (arr[(row + 1) % 3][(col + 2) % 3] * arr[(row + 2) % 3][(col + 1) % 3])) / det;
            }
        }
        vector<double> ans(3);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ans[i] += mat[i][j] * arr[j][3];
            }
        }
        for (int i = 0; i < 3; i++)
            ans[i] = floor(ans[i]);
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
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
```

