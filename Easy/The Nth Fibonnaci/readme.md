# The Nth Fibonnaci
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a positive integer `N`, find the last digit of the Nth term from the Fibonacci series.

**Note:** For N=0 you have to return 0.

__Example 1:__
```
Input:
N = 5
Output:
5
Explanation:
5th Fibonacci number is 5
```
__Example 2:__
```
Input:
N = 14
Output:
7
Explanation:
14th Fibonacci number is 377
It's last digit is 7
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **fib()** which takes an integer N as input parameter and returns the last digit of Nth Fibonacci number.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 <= N <= 1000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fib(int N)
    {
        if (N == 0)
        {
            return 0;
        }
        else
        {
            int n1 = 0, n2 = 1, n3 = 0;
            for (int i = 0; i < N; i++)
            {
                n3 = (n1 + n2) % 10;
                n2 = n1;
                n1 = n3;
            }
            return n3;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0;
}
```