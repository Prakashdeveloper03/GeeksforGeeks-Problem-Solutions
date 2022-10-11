# Power of 2
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2<sup>x</sup> for some x.

__Example 1:__
```
Input: N = 1
Output: Yes
Explanation:1 is equal to 2
raised to 0 (20 = 1).
```
__Example 2:__
```
Input: N = 98
Output: No
Explanation: 98 cannot be obtained
by any power of 2.
```
__Your Task__

Your task is to complete the function **isPowerofTwo()** which takes n as a parameter and returns true or false by checking if the given number can be represented as a power of two or not.

__Expected Time Complexity:__ O(log n)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 ≤ N ≤ 10<sup>18</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerofTwo(long long n)
    {
        return (n > 0 && (n & n - 1) == 0);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Solution obj;
        if (obj.isPowerofTwo(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
```