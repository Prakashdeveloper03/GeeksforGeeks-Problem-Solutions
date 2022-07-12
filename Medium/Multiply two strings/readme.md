# Multiply two strings
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two numbers as strings `s1` and `s2`. Calculate their Product.

**Note:** The numbers can be negative.

__Example 1:__
```
Input:
s1 = "33"
s2 = "2"
Output:
66
```
__Example 2:__
```
Input:
s1 = "11"
s2 = "23"
Output:
253
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **multiplyStrings()** which takes two strings s1 and s2 as input and returns their product as a string.

**Note:** You are not allowed to use any built-in function or convert the strings to integer.

__Expected Time Complexity:__ O(n1 * n2)

__Expected Auxiliary Space:__ O(n1 * n2)

__Constraints:__
- 1 ≤ length of s1 and s2 ≤ 10<sup>3</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string multiplyStrings(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return "0";
        string res = "";

        if (num1[0] == '-' && num2[0] == '-')
        {
            num1 = num1.substr(1);
            num2 = num2.substr(1);
        }

        else if (num1[0] == '-' && num2[0] != '-')
        {
            num1 = num1.substr(1);
            res.push_back('-');
        }

        else if (num1[0] != '-' && num2[0] == '-')
        {
            num2 = num2.substr(1);
            res.push_back('-');
        }

        vector<int> num(num1.size() + num2.size(), 0);
        for (int i = num1.size() - 1; i >= 0; --i)
        {
            for (int j = num2.size() - 1; j >= 0; --j)
            {
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                num[i + j] += num[i + j + 1] / 10;
                num[i + j + 1] %= 10;
            }
        }
        int i = 0;
        while (i < num.size() && num[i] == 0)
            ++i;
        while (i < num.size())
            res.push_back(num[i++] + '0');
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;
    }
    return 0;
}
```