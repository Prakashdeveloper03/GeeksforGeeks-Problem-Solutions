# Sum of all prime numbers between 1 and N
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a positive integer N, find the sum of all prime numbers between 1 and N(inclusive).

__Example 1:__
```
Input: N = 5
Output: 10
Explanation: 2, 3, and 5 are prime
numbers between 1 and 5(inclusive).
```
__Example 2:__
```
Input: N = 10
Output: 17
Explanation: 2, 3, 5 and 7 are prime
numbers between 1 and 10(inclusive).
```
__Your Task__

You don't need to read or print anyhting. Your task is to complete the function prime_Sum() which takes N as input parameter and returns the sum of all primes between 1 and N(inclusive).

__Expected Time Complexity:__ O(N * log(N))

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= N <= 1000000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int prime_Sum(int n)
    {
        long long int sum = 0;
        int a[n + 1];

        for (int g = 1; g <= n; g++)
        {
            a[g] = 0;
        }

        for (int i = 2; i < sqrt(n) + 1; i++)
        {
            for (int j = 2; j < n / i + 1; j++)
            {
                a[i * j] = 1;
            }
        }

        for (int g = 2; g <= n; g++)
        {
            if (a[g] == 0)
                sum = sum + g;
        }

        return sum;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        long long int ans = ob.prime_Sum(n);
        cout << ans << "\n";
    }
    return 0;
}
```