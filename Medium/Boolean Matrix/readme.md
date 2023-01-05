# Boolean Matrix
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its i<sup>th</sup> row and j<sup>th</sup> column will become 1.

__Example 1:__
```
Input:
R = 2, C = 2
matrix[][] = {{1, 0},
              {0, 0}}
Output:
1 1
1 0
Explanation:
Only cell that has 1 is at (0,0) so all
cells in row 0 are modified to 1 and all
cells in column 0 are modified to 1.
```
__Example 2:__
```
Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output:
1 1 1
1 1 1
1 1 1
1 0 0
Explanation:
The position of cells that have 1 in
the original matrix are (0,0), (1,0)
and (2,0). Therefore, all cells in row
0,1,2 are and column 0 are modified to 1.
```
__Your Task__

You dont need to read input or print anything. Complete the function **booleanMatrix()** that takes the matrix as input parameter and modifies it in-place.

__Expected Time Complexity:__ O(R * C)

__Expected Auxiliary Space:__ O(R + C)

__Constraints:__
- 1 ≤ R, C ≤ 1000
- 0 ≤ matrix[i][j] ≤ 1

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        vector<vector<int>> v;
        v = matrix;
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (v[i][j] == 1)
                {
                    for (int k = 0; k < c; k++)
                    {
                        matrix[i][k] = 1;
                    }
                    for (int k = 0; k < r; k++)
                    {
                        matrix[k][j] = 1;
                    }
                }
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> matrix(row);
        for (int i = 0; i < row; i++)
        {
            matrix[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.booleanMatrix(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
```