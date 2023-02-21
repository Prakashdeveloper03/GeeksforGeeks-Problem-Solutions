# Valid Expression
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string S, composed of different combinations of '(' , ')', '{', '}', '[', ']'. The task is to verify the validity of the arrangement.

**Note:** Ignore the precedence of brackets.

__Example 1:__
```
Input:
S = ()[]{}
Output: 1
Explanation: The arrangement is valid.
```
__Example 2:__
```
Input:
S = ())({}
Output: 0
Explanation: Arrangement is not valid.
```
__Your Task__

You dont need to read input or print anything. Complete the function **valid()** which takes S as input and returns a boolean value denoting whether the arrangement is valid or not.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        cout << valid(str) << endl;
    }
    return 0;
}

bool valid(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (st.empty() && (i == ')' || i == ']' || i == '}'))
        {
            return false;
        }
        else if (i == '(' || i == '[' || i == '{')
        {
            st.push(i);
        }
        else if (!st.empty() && st.top() == '[' && i == ']')
        {
            st.pop();
        }
        else if (!st.empty() && st.top() == '(' && i == ')')
        {
            st.pop();
        }
        else if (!st.empty() && st.top() == '{' && i == '}')
        {
            st.pop();
        }
        else
            return false;
    }
    if (st.size() == 0)
        return true;
    return false;
}
```