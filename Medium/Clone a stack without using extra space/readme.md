# Clone a stack without using extra space
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given elements of a stack, clone the stack without using extra space.

__Example 1:__
```
Input:
N = 10
st[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7}
Output:
1
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **clonestack()** which takes the input stack st[], an empty stack cloned[], you have to clone the stack st into stack cloned. The driver code itself prints 1 in the output if the stack st is cloned properly and prints 0 otherwise.

__Expected Time Complexity:__ O(N * N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 1000
- 1 <= st[i] <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void clonestack(stack<int> st, stack<int> &cloned)
    {
        cloned.swap(st);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        stack<int> st;
        vector<int> copy;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        reverse(copy.begin(), copy.end());
        Solution obj;
        stack<int> cloned;
        obj.clonestack(st, cloned);
        vector<int> check;
        while (cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        int flag = 0;
        if (check != copy)
            flag = 1;
        cout << 1 - flag << endl;
    }
    return 0;
}
```