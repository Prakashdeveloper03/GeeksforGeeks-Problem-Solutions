# Factorial
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a positive integer, N. Find the factorial of N.

__Example 1:__
```
Input:
N = 5
Output:
120
Explanation:
5 * 4 * 3 * 2 * 1 = 120
```
__Example 2:__
```
Input:
N = 4
Output:
24
Explanation:
4 * 3 * 2 * 1 = 24
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **factorial()** which takes an integer N as input parameters and returns an integer, the factorial of N.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 <= N <= 18

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int factorial(int N)
    {
        if (N == 0)
            return 1;
        return N * factorial(N - 1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.factorial(n) << endl;
    }
    return 0;
}
```