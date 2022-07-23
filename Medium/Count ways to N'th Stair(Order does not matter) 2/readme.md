# Count ways to N'th Stair(Order does not matter)
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

There are `N` stairs, and a person standing at the bottom wants to reach the top. The person can climb either **1 stair or 2 stairs at a time**. Count the number of ways, the person can reach the top (**order does not matter**).

**Note:** Order does not matter means for n = 4 {1 2 1},{2 1 1},{1 1 2} are considered same.

__Example 1:__
```
Input: N = 4
Output: 3
Explanation: Three ways to reach at 4th stair.
They are {1, 1, 1, 1}, {1, 1, 2}, {2, 2}.
```
__Example 2:__
```
Input: N = 5
Output: 3
Explanation: Three ways to reach at 5th stair.
They are {1, 1, 1, 1, 1}, {1, 1, 2, 1} and
{1, 2, 2}.
```
__Your Task__

You don't need to read or print anyhting. Your task is to complete the function **nthStair()** which takes N as input parameter and returns the total number of ways to reach at Nth stair.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 ≤ N ≤ 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthStair(int n)
    {
        return n / 2 + 1;
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
        Solution ob;
        int ans = ob.nthStair(n);
        cout << ans << "\n";
    }
    return 0;
}
```