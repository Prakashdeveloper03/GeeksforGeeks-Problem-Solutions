# 2D Hopscotch
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Aakriti, Avantika and Mehak are playing 2D Hopscotch. The arena is in the form of a n*m 2D matrix. But the position of the cells is slightly modified as shown below.

![](https://contribute.geeksforgeeks.org/wp-content/uploads/hopscotch-1.jpg)

Mehak starts the game from tile (i,j) while Avantika and Aakriti direct her. In each turn Mehak will collect all the stones present (1 or 2) steps away from where she is standing. Avantika can direct Mehak to take 1 step and and Aakriti can direct Mehak to take 2 steps.
If the director ty is known to you as ty = 0 being Avantika and 1 being Aakriti, find the number of stones that Mehak will collect.

__Example 1:__
```
Input:
n = 3, m = 3
mat = {{5, 9, 7},
       {6, 4, 5},
       {8, 1, 2}}
ty = 0,
i = 1, j = 1
Output: 31
Explaination:
ty=0, so Avantika is the director.
ie- Mehak will move only one step in
any direction to collect the stones.
(0,1), (1,0), (1,2), (2,1), (2,2), (2,0)
are at a distance of 1 from (1,1).
Adding them 9+6+5+8+1+2=31.
```
__Example 2:__
```
Input:
n = 3, m = 3
mat = {{5, 9, 7},
       {6, 4, 5},
       {8, 1, 2}}
ty = 1,
i = 1, j = 1
Output: 12
Explaination:
ty=1, so Aakriti is the director.
ie- Mehak can move 2 steps.
(0,0) and (0,2) are the only tiles that
are at a distance of two from (1,1).
Adding them gives 5+7=12.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **hopscotch()** which takes n, m, mat, ty, i and j as input parameters and returns the number of collected stones.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ n, m ≤ 20
- 0 ≤ i < n
- 0 ≤ j < m

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        int sum = 0;
        if (ty == 0)
        {
            if (i - 1 >= 0)
                sum += mat[i - 1][j];
            if (i + 1 < n)
                sum += mat[i + 1][j];
            if (j - 1 >= 0)
                sum += mat[i][j - 1];
            if (j + 1 < m)
                sum += mat[i][j + 1];
            if (j % 2)
            {
                if (i + 1 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 1][j + 1];
                }
            }
            else
            {
                if (i - 1 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 1][j + 1];
                }
            }
            return sum;
        }
        else
        {
            if (i - 2 >= 0)
                sum += mat[i - 2][j];
            if (i + 2 < n)
                sum += mat[i + 2][j];
            if (j - 2 >= 0)
                sum += mat[i][j - 2];
            if (j + 2 < m)
                sum += mat[i][j + 2];
            if (i - 1 >= 0)
            {
                if (j - 2 >= 0)
                    sum += mat[i - 1][j - 2];
                if (j + 2 < m)
                    sum += mat[i - 1][j + 2];
            }
            if (i + 1 < n)
            {
                if (j - 2 >= 0)
                    sum += mat[i + 1][j - 2];
                if (j + 2 < m)
                    sum += mat[i + 1][j + 2];
            }
            if (j % 2)
            {
                if (i - 1 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 1][j + 1];
                }
                if (i + 2 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 2][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 2][j + 1];
                }
            }
            else
            {
                if (i + 1 < n)
                {
                    if (j - 1 >= 0)
                        sum += mat[i + 1][j - 1];
                    if (j + 1 < m)
                        sum += mat[i + 1][j + 1];
                }
                if (i - 2 >= 0)
                {
                    if (j - 1 >= 0)
                        sum += mat[i - 2][j - 1];
                    if (j + 1 < m)
                        sum += mat[i - 2][j + 1];
                }
            }
            return sum;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j, ty;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(0, m));
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> mat[i][j];
        cin >> ty >> i >> j;
        Solution obj;
        cout << obj.hopscotch(n, m, mat, ty, i, j) << endl;
    }
    return 0;
}
```