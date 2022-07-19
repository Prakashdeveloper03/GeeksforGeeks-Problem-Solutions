# A Simple Fraction
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a fraction. Convert it into a decimal.
If the fractional part is repeating, enclose the repeating part in parentheses.

__Example 1:__
```
Input: numerator = 1, denominator = 3
Output: "0.(3)"
Explanation: 1/3 = 0.3333... So here 3 is
recurring.
```
__Example 2:__
```
Input: numerator = 5, denominator = 2
Output: "2.5"
Explanation: 5/2 = 2.5
```
__Your Task__

You don't need to read or print anyhting. Your task is to complete the function **fractionToDecimal()** which takes numerator and denominator as input parameter and returns its decimal form in string format.

__Expected Time Complexity:__ O(k)

__Expected Auxiliary Space:__ O(k)

__Constraints:__
- 1 ≤ numerator, denominator ≤ 2000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
        int whole = numerator / denominator;
        int decimal = numerator % denominator;
        string ans = to_string(whole);
        if (decimal == 0)
            return ans;
        unordered_map<int, int> mp;
        mp.clear();
        ans += ".";
        while (decimal != 0)
        {
            if (mp.count(decimal))
            {
                ans.insert(mp[decimal], "(");
                ans += ")";
                return ans;
            }
            else
            {
                mp[decimal] = ans.length();
                decimal *= 10;
                int q = decimal / denominator;
                decimal = decimal % denominator;
                ans += to_string(q);
            }
        }
        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int numerator, denominator;
        cin >> numerator >> denominator;
        Solution ob;
        string ans = ob.fractionToDecimal(numerator, denominator);
        cout << ans << "\n";
    }
    return 0;
}
```