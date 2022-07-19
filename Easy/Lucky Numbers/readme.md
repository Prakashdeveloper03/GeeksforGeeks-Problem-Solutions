# Lucky Numbers
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
Take the set of integers
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
First, delete every second number, we get following reduced set.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
Now, delete every third number, we get
1, 3, 7, 9, 13, 15, 19,….….
Continue this process indefinitely……
Any number that does NOT get deleted due to above process is called “lucky”.

__Example 1:__
```
Input:
N = 5
Output: 0
Explanation: 5 is not a lucky number
as it gets deleted in the second
iteration.
```
__Example 2:__
```
Input:
N = 19
Output: 1
Explanation: 19 is a lucky number
```
__Your Task__

You don't need to read input or print anything. You only need to complete the function **isLucky()** that takes N as parameter and returns either False if the N is not lucky else True.

__Expected Time Complexity:__ O(sqrt(N))

__Expected Auxiliary Space:__ O(sqrt(N))

__Constraints:__
- 1 <= N <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isLucky(int n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
                return false;
            if (i > n)
                return true;
            n -= (n / i);
        }
    }
};

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution obj;
        if (obj.isLucky(n))
            cout << "1\n";
        else
            cout << "0\n";
    }
}
```