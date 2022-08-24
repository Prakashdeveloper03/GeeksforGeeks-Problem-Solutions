# Nth Fibonacci Number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

__Example 1:__
```
Input: n = 2
Output: 1 
Explanation: 1 is the 2nd number
of fibonacci series.
```
__Example 2:__
```
Input: n = 5
Output: 5
Explanation: 5 is the 5th number
of fibonacci series.
```
__Your Task__

You dont need to read input or print anything. Complete the function __nthFibonacci()__ which takes n as input parameter and returns nth fibonacci number.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 <= n <= 1000 

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int nthFibonacci(long long int n)
    {
        int first = -1, second = 1;
        long long int next;
        for (int itr = 0; itr <= n; itr++)
        {
            next = (first + second) % 1000000007;
            first = second;
            second = next;
        }
        return next;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        Solution obj;
        cout << obj.nthFibonacci(n) << endl;
    }
    return 0;
}
```

