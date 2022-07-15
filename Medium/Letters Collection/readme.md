# Letters Collection
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

The Postmaster wants to write a program to answer the queries regarding letter collection in a city. A city is represented as a matrix mat of size n*m. Each cell represents a house and contains letters which are denoted by a number in the cell. The program should answer q queries which are of following types:
1 i j : To sum all the letters which are at a 1-hop distance from the cell (i,j) in any direction
2 i j : To sum all the letters which are at a 2-hop distance from the cell (i,j) in any direction
The queries are given in a 2D matrix queries[][].

__Example 1:__
```
Input:
n = 4, m = 4
mat = {{1, 2, 3, 4},
       {5, 6, 7, 8},
       {9, 1, 3, 4},
       {1, 2, 3, 4}}
q = 2
queries = {{1 0 1},
           {2 0 1}}
Output: 22 29
Explaination:
For the first query sum is 1+5+6+7+3 = 22.
For the second query sum is 9+1+3+4+8+4 = 29.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **matrixSum()** which takes n, m, mat, q and queries as input parameters and returns a list of integers where the ith value is the answers for ith query.

__Expected Time Complexity:__ O(q)

__Expected Auxiliary Space:__ O(q)

__Constraints:__
- 1 ≤ n, m ≤ 20
- 1 ≤ q ≤ 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for (int count = 0; count < q; count++)
        {
            int h = queries[count][0];
            int i = queries[count][1];
            int j = queries[count][2];
            if (i >= n || j >= m)
            {
                ans.push_back(-1);
            }
            int sum = 0;
            for (int k = -h; k <= h; k++)
            {
                if (i - h > -1 && j + k > -1 && j + k < m)
                    sum += mat[i - h][j + k];

                if (i + h < n && j + k > -1 && j + k < m)
                    sum += mat[i + h][j + k];

                if (k > -h && k < h)
                {
                    if (j - h > -1 && i + k > -1 && i + k < n)
                        sum += mat[i + k][j - h];
                    if (j + h < m && i + k > -1 && i + k < n)
                        sum += mat[i + k][j + h];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q, ty, i, j;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> mat[i][j];
        cin >> q;
        vector<int> queries[q];
        for (int k = 0; k < q; k++)
        {
            cin >> ty >> i >> j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        Solution obj;
        vector<int> ans = obj.matrixSum(n, m, mat, q, queries);
        for (int u : ans)
            cout << u << endl;
    }
    return 0;
}
```