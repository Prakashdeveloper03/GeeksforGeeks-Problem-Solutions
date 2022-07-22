# Shortest Common Supersequence
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.

**Note:** X and Y can have both uppercase and lowercase letters.

__Example 1:__
```
Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.
```
__Example 2:__
```
Input:
X = efgh, Y = jghi
Output: 6
Explanation: Shortest Common Supersequence
would be ejfghi which is of length 6 and
has both the strings as its subsequences.
```
__Your Task__

Complete **shortestCommonSupersequence()** function that takes X, Y, m, and n as arguments and returns the length of the required string.

__Expected Time Complexity:__ O(Length(X) * Length(Y))

__Expected Auxiliary Space:__ O(Length(X) * Length(Y))

__Constraints:__
- 1 <= |X|, |Y| <= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int t[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                {
                    t[i][j] = 0;
                }
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (X[i - 1] == Y[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                }
                else
                {
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        int ans = (m + n) - t[m][n];
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        Solution obj;
        cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size()) << endl;
    }
    return 0;
}
```