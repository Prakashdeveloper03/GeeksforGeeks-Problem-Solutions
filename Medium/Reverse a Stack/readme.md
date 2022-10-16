# Reverse a Stack
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given a stack `st`. You have to reverse the stack using recursion.

__Example 1:__
```
Input:
st = {3,2,1,7,6}
Output:
{6,7,1,2,3}
```
__Example 2:__
```
Input:
st = {4,3,9,6}
Output:
{6,9,3,4}
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **Reverse()** which takes the stack `st` as input and returns the reversed stack.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= size of the stack <= 10<sup>4</sup>
- -10<sup>9</sup> <= Each element of the stack <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    stack<int> Reverse(stack<int> st)
    {
        stack<int> s1;
        reverse(st, s1);
        return s1;
    }

    void reverse(stack<int> st, stack<int> &s1)
    {
        if (st.empty())
            return;
        int a = st.top();
        st.pop();
        s1.push(a);
        reverse(st, s1);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        stack<int> St;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans = ob.Reverse(St);
        vector<int> res;
        while (ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
```

