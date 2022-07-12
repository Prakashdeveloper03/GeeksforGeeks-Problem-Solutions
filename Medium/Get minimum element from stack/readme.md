# Get minimum element from stack
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given `N` elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

__Example 1:__
```
Input:
push(2)
push(3)
pop()
getMin()
push(1)
getMin()
Output: 3 2 1
Explanation: In the first test case for
query
push(2)  Insert 2 into the stack.
         The stack will be {2}
push(3)  Insert 3 into the stack.
         The stack will be {2 3}
pop()    Remove top element from stack
         Poped element will be 3 the
         stack will be {2}
getMin() Return the minimum element
         min element will be 2
push(1)  Insert 1 into the stack.
         The stack will be {2 1}
getMin() Return the minimum element
         min element will be 1
```
__Your Task__

You are required to complete the three methods **push()** which take one argument an integer 'x' to be pushed into the stack, **pop()** which returns a integer poped out from the stack and **getMin()** which returns the min element from the stack. (-1 will be returned if for pop() and getMin() the stack is empty.)

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= number of queries <= 100
- 1 <= values of the stack <= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int minEle;
    stack<pair<int, int>> s;

public:
    int getMin()
    {
        if (s.empty())
            return -1;
        return s.top().second;
    }

    int pop()
    {
        if (s.size() == 0)
            return -1;
        int val = s.top().first;
        s.pop();
        return val;
    }

    void push(int x)
    {
        if (s.size() == 0)
            s.push({x, x});
        else
        {
            minEle = min(s.top().second, x);
            s.push({x, minEle});
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution obj;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {
                int att;
                cin >> att;
                obj.push(att);
            }
            else if (qt == 2)
            {
                cout << obj.pop() << endl;
            }
            else if (qt == 3)
            {
                cout << obj.getMin() << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
```