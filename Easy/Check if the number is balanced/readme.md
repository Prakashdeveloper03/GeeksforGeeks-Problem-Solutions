# Check if the number is balanced
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an integer `N` which has odd number of digits, find whether the given number is a balanced or not.

An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all digits to the right of the middle digit is equal.

__Example 1:__
```
Input:
N = 1234006
Output: 1
Explanation: Total number of digits in
N = 7. Middle digit is 4. LHS = 1+2+3 = 6
and RHS = 0+0+6 = 6. LHS is equal to RHS.
```
__Example 2:__
```
Input:
N = 12345
Output: 0
Explanation: LHS = 1+2 = 3 and RHS = 4+5
= 9. LHS and RHS are not equal.
```
__Your Task__

You dont need to read input or print anything. Complete the function balancedNumber() which takes string N as input parameter and returns a boolean value denoting if N is balanced or not.

**Note:** The driver code prints 1 if the returned value is true otherwise 0

__Expected Time Complexity:__ O(number of digits in N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1<= N <= 10<sup>100</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool balancedNumber(string N)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < N.length() / 2; i++)
        {
            sum1 += int(N[i] - '0');
            sum2 += int(N[N.length() - 1 - i] - '0');
        }
        if (sum1 == sum2)
            return true;
        else
            return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string N;
        cin >> N;
        Solution ob;
        cout << ob.balancedNumber(N) << endl;
    }
    return 0;
}
```