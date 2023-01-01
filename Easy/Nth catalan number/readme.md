# Nth catalan number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number `N`. The task is to find the N<sup>th</sup> catalan number.
The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

**Note:** Positions start from 0 as shown above.

__Example 1:__
```
Input:
N = 5
Output: 42
```
__Example 2:__
```
Input:
N = 4
Output: 14
```
__Your Task__

Complete **findCatalan()** function that takes n as an argument and returns the Nth Catalan number. The output is printed by the driver code.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findCatalan(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        int u, d, curr = 1;
        for (int i = 1; i < n; i++)
        {
            u = 2 * i + 1;
            u = 2 * u * curr;
            d = i + 2;
            curr = u / d;
        }
        return curr;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.findCatalan(n) << "\n";
    }
    return 0;
}
```

