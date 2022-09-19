# Check if a number is power of another number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two positive numbers X and Y, check if Y is a power of X or not.

__Example 1:__
```
Input:
X = 2, Y = 8
Output:
1
Explanation:
2 ^ 3 is equal to 8.
```
__Example 2:__
```
Input:
X = 1, Y = 3
Output:
0
Explanation:
Any power of 1 is not
equal to 8.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **isPowerOfAnother()** which takes an integer and returns 1 if y is the power of x, else return 0.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= x <= 10<sup>3</sup>
- 1 <= y <= 10<sup>8</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPowerOfAnother(long long x, long long y)
    {
        for (int i = 0; i < 64; i++)
        {
            if (pow(x, i) == y)
            {
                return 1;
            }
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        Solution obj;
        cout << obj.isPowerOfAnother(X, Y) << endl;
    }
    return 0;
}
```