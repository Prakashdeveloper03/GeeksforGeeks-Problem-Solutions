# C++ Matrix Rotation by 180 degree
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a square matrix of size N X N, turn it by 180 degrees in anticlockwise direction without using extra memory.

__Example 1:__
```
Input: N = 4,
matrix = {{1, 2, 3, 4},
          {5, 6, 7 ,8},
          {9, 10, 11, 12},
          {13, 14, 15, 16}}
Output: {{16, 15, 14, 13},
         {12, 11, 10, 9},
         {8, 7, 6, 5},
         {4, 3, 2, 1}}
```
__Example 2:__
```
Input: N = 2,
matrix = {{1, 2},
          {3, 4}}
Output: {{4, 3},
         {2, 1}}
```
__Your Task__

You don't need to read or print anything. Your task is to complete the function **rotate()** which takes matrix as input parameter and rotate the matrix by 180 degree wihtout using extraa memory. You have to rotate the matrix in-place which means you have to modify the input matrix directly.

__Expected Time Complexity:__ O(N<sup>2</sup>)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 500

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                swap(matrix[i][j], matrix[n - 1 - i][n - 1 - j]);
            }
        }

        if (n % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                swap(matrix[n / 2][i], matrix[n / 2][n - 1 - i]);
            }
        }
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        ob.rotate(matrix);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}
```