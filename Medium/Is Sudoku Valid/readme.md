# Is Sudoku Valid
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an incomplete Sudoku configuration in terms of a 9x9  2-D square matrix(`mat[][]`) the task to check if the current configuration is valid or not where a 0 represents an empty block.

**Note:** Current valid configuration does not ensure validity of the final solved sudoku.

__Example:__
```
Input: mat[][] = [
[3, 0, 6, 5, 0, 8, 4, 0, 0]
[5, 2, 0, 0, 0, 0, 0, 0, 0]
[0, 8, 7, 0, 0, 0, 0, 3, 1]
[0, 0, 3, 0, 1, 0, 0, 8, 0]
[9, 0, 0, 8, 6, 3, 0, 0, 5]
[0, 5, 0, 0, 9, 0, 6, 0, 0]
[1, 3, 0, 0, 0, 0, 2, 5, 0]
[0, 0, 0, 0, 0, 0, 0, 7, 4]
[0, 0, 5, 2, 0, 6, 3, 0, 0]
]
Output: 1
Explaination: It is possible to have a
proper sudoku.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **isValid()** which takes `mat[][]` as input parameter and returns 1 if any solution is possible. Otherwise, returns 0.

__Expected Time Complexity:__ O(N<sup>2</sup>)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 ≤ mat[i][j] ≤ 9

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool istrue(int row, int col, vector<vector<int>> mat, int val)
    {
        for (int i = 0; i < 9; i++)
        {
            if (mat[row][i] == val)
                return 0;
        }
        for (int i = 0; i < 9; i++)
        {
            if (mat[i][col] == val)
                return 0;
        }
        for (int i = 0; i < 9; i++)
        {
            if (mat[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == val)
                return 0;
        }
        return 1;
    }

    int isValid(vector<vector<int>> mat)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (mat[i][j] != 0)
                {
                    int val = mat[i][j];
                    mat[i][j] = 0;
                    if (istrue(i, j, mat, val) == 1)
                        mat[i][j] = val;
                    else
                        return 0;
                }
            }
        }
        return 1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for (int i = 0; i < 81; i++)
            cin >> mat[i / 9][i % 9];

        Solution ob;
        cout << ob.isValid(mat) << "\n";
    }
    return 0;
}
```