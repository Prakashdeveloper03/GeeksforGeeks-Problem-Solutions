# Count ways to reach the n'th stair
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either **1 stair or 2 stairs at a time**. Count the number of ways, the person can reach the top (**order does matter**).

__Example 1:__
```
Input:
n = 4
Output: 5
Explanation:
You can reach 4th stair in 5 ways.
Way 1: Climb 2 stairs at a time.
Way 2: Climb 1 stair at a time.
Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.
Way 4: Climb 1 stair, then 2 stairs
then 1 stair.
Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.
```
__Example 2:__
```
Input:
n = 10
Output: 89
Explanation:
There are 89 ways to reach the 10th stair.
```
__Your Task__

Complete the function **countWays()** which takes the top stair number m as input parameters and returns the **answer % 10^9+7**.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ n ≤ 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countWays(int n)
    {
        int p1 = 1, p2 = 1;
        int mod = 1e9 + 7;
        for (int i = 2; i <= n; i++)
        {
            int cr = (p2 + p1) % mod;
            p2 = p1;
            p1 = cr;
        }
        return (p1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl;
    }
    return 0;
}
```