# Count the Reversals
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a string S consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression.
A reversal means changing '{' to '}' or vice-versa.

__Example 1:__
```
Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
```
__Example 2:__
```
Input:
S = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **countRev()** which takes the string S as input parameter and returns the minimum number of reversals required to balance the bracket sequence. If balancing is not possible, return -1.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= |S| <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

int countRev(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countRev(s) << '\n';
    }
}

int countRev(string s)
{
    int n = s.length();
    if (n % 2 != 0)
    {
        return -1;
    }
    int count = 0;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                s[i] = '{';
                st.push(s[i]);
                count++;
            }
            else
            {
                st.pop();
            }
        }
    }
    return (st.size() / 2) + count;
}
```