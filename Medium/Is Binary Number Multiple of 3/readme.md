# Is Binary Number Multiple of 3
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a binary number, Find, if given binary number is a multiple of 3. The given number can be big upto 2^10000. It is recommended to finish the task using one traversal of input binary string.

__Example 1:__
```
Input: S = "011"
Output: 1
Explanation: "011" decimal equivalent
is 3, which is divisible by 3.
```
__Example 2:__
```
Input: S = "100"
Output: 0
Explanation: "100" decimal equivalent
is 4, which is not divisible by 3.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **isDivisible()** which takes the string s as inputs and returns 1 if the given number is divisible by 3 otherwise 0.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ 1 ≤ |S| ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isDivisible(string s)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                    even++;
            }
            else
            {
                if (s[i] == '1')
                    odd++;
            }
        }
        return abs(odd - even) % 3 == 0;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
    return 0;
}
```