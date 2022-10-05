# Remove K Digits
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a non-negative integer S represented as a string, remove K digits from the number so that the new number is the smallest possible.

**Note:** The given num does not contain any leading zero.

__Example 1:__
```
Input:
S = "149811", K = 3
Output: 111
Explanation: Remove the three digits
4, 9, and 8 to form the new number 111
which is smallest.
```
__Example 2:__
```
Input:
S = "1002991", K = 3
Output: 21
Explanation: Remove the three digits 1(leading
one), 9, and 9 to form the new number 21(Note
that the output must not contain leading
zeroes) which is the smallest.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **removeKdigits()** which takes the string S and an integer K as input and returns the new number which is the smallest possible.

__Expected Time Complexity:__ O(|S|)

__Expected Auxiliary Space:__ O(|S|)

__Constraints:__
- 1 <= |S| <= 10002
- 1 <= K <= |S|

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeKdigits(string S, int K)
    {
        if (K >= S.size())
        {
            return "0";
        }
        string ans = "";
        stack<char> st;
        for (int i = 0; i < S.size(); i++)
        {
            while (!st.empty() and K > 0 and st.top() > S[i])
            {
                st.pop();
                K--;
            }

            if (!st.empty() or S[i] != '0')
            {
                st.push(S[i]);
            }
        }
        while (K > 0 and !st.empty())
        {
            st.pop();
            K--;
        }
        if (st.empty())
        {
            return "0";
        }
        else
        {
            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}
```

