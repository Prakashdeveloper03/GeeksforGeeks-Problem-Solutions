# Largest number possible
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two numbers 'N' and 'S' , find the largest number that can be formed with 'N' digits and whose sum of digits should be equals to 'S'.

__Example 1:__
```
Input: N = 2, S = 9
Output: 90
Explaination: It is the biggest number
with sum of digits equals to 9.
```
__Example 2:__
```
Input: N = 3, S = 20
Output: 992
Explaination: It is the biggest number
with sum of digits equals to 20.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function findLargest() which takes N and S as input parameters and returns the largest possible number. Return -1 if no such number is possible.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>4</sup>
- 0 ≤ S ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string findLargest(int N, int S)
    {
        string res = "";
        if (S == 0 && N > 1)
            return "-1";

        while (S)
        {
            if (S > 9)
            {
                res += '9';
                S = S - 9;
                N--;
            }
            else
            {
                res += to_string(S);
                S = 0;
                N--;
            }
        }
        if (N < 0)
            return "-1";
        while (N)
        {
            res += '0';
            N--;
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        cin >> N >> S;

        Solution ob;
        cout << ob.findLargest(N, S) << "\n";
    }
    return 0;
}
```