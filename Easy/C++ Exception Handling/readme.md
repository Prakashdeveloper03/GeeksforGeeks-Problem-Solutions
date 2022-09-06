# C++ Exception Handling
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given 2 integers A and B. Find the maximum value of A$B where $ can be any of the arithmetic operation {+, -, *, / }. Use exception handling to take care of infinite or undefined behaviour.

__Example 1:__
```
Input: A = 5, B = -5
Output: 10
Explaination: Use subtraction. A-B = 10.
```
__Example 2:__
```
Input: A = 4, B = 0
Output: inf
Explaination: a/b gives the maximum.
ie- infinity.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **maxValue()** which takes A and B as input parameters and returns the maximum value of A$B. Return **-999999** for **infinity**.

**Note:** If you return -999999 the output will be displayed as "inf".

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- -10<sup>3</sup> <= A, B <= 10<sup>3</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxValue(int A, int B)
    {
        try
        {
            if (B == 0)
            {
                throw 0;
            }
            else
            {
                return max(A * B, max(A + B, max(A - B, A / B)));
            }
        }
        catch (int i)
        {
            return -999999;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;

        Solution ob;
        int ans = ob.maxValue(A, B);
        if (ans == -999999)
            cout << "inf\n";
        else
            cout << ans << "\n";
    }
    return 0;
}
```