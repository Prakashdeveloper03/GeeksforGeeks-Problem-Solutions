# C++ Nega Bit
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two integer numbers, F and S. In binary form of the numbers, for every ith set bit in F, negate the i th bit in S.

__Example 1:__
```
Input:
F = 2 , S = 5
Output:
7
Explanation:
2 is represented as 10 in binary and
5 is represented as 101. Hence negating
the 2nd bit of 5 from right, thus the
new number becomes 7 i.e. 111.
```
__Example 2:__
```
Input:
F = 1 , S = 3
Output:
2
Explanation:
1-1 and 3-11 in binary, thus negating
1st bit of 3 from right we get 10 i.e. 2.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **negaBit()** which takes 2 Integers F and S as input and returns the modified S.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= F,S <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int negaBit(int F, int S)
    {
        return F ^ S;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int F, S;
        cin >> F >> S;
        Solution obj;
        cout << obj.negaBit(F, S) << endl;
    }
    return 0;
}
```