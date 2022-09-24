# Implement Atoi
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Your task  is to implement the function **atoi**. The function takes a string(str) as argument and converts it to an integer and returns it.

**Note:** You are not allowed to use inbuilt function.

__Example 1:__
```
Input:
str = 123
Output: 123
```
__Example 2:__
```
Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.
```
__Your Task__

Complete the function **atoi()** which takes a string as input parameter and returns integer value of it. if the input string is not a numerical string then returns -1.

**Note:** Numerical strings are the string where either every character is in between 0-9 or where the first character is '-' and the rest all characters are in between 0-9.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ length of S ≤ 10

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int atoi(string str)
    {
        int n = str.length() - 1;
        int res = 0;
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '-')
            {
                if (flag == true)
                {
                    return -1;
                }
                flag = true;
                n--;
                continue;
            }
            int el = str[i] - '0';
            if (el >= 0 && el <= 9)
            {
                res += el * pow(10, n);
                n--;
            }
            else
            {
                return -1;
            }
        }
        if (flag)
        {
            return (-1) * res;
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.atoi(s) << endl;
    }
    return 0;
}
```