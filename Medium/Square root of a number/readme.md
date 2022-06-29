# Square root of a number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

__Example 1:__
```
Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect
square, floor of square_root of 5 is 2.
```
__Example 2:__
```
Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect
square, so its square root is 2.
```
__Your Task__

You don't need to read input or print anything. The task is to complete the function **floorSqrt()** which takes x as the input parameter and return its square root.
Note: Try Solving the question without using the **sqrt** function. The value of `x >= 0`.

__Expected Time Complexity:__ O(log N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ x ≤ 10<sup>7</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        long long int low = 1, high = x, mid, ans;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid > x)
            {
                high = mid - 1;
            }
            else
            {
                ans = mid;
                low = mid + 1;
            }
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
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}
```

