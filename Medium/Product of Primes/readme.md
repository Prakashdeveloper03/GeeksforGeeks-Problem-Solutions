# Product of Primes
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two numbers L and R (inclusive) find the **product of primes** within this range. Print the product modulo 109+7. If there are no primes in that range you must print 1.

__Example 1:__
```
Input: L = 1, R = 10
Output: 210
Explaination: The prime numbers are
2, 3, 5 and 7.
```
__Example 2:__
```
Input: L = 1, R = 20
Output: 9699690
Explaination: The primes are 2, 3,
5, 7, 11, 13, 17 and 19.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **primeProduct()** which takes L and R and returns the product of the primes within the range. If there are no primes in that range then return 1.

__Expected Time Complexity:__ O((R-L) * (logR))

__Expected Auxiliary Space:__ O(sqrt(R))

__Constraints:__
- 1 ≤ L, R ≤ 10<sup>6</sup>
- 1 ≤ L - R ≤ 10<sup>3</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    const int m = 1e9 + 7;

public:
    bool isprime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i <= (sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    long long primeProduct(long long L, long long R)
    {
        long long int ans = 1;
        for (long long int i = L; i <= R; i++)
        {
            if (isprime(i))
            {
                ans = (ans % m) * i;
            }
        }
        return ans % m;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long L, R;
        cin >> L >> R;

        Solution ob;
        cout << ob.primeProduct(L, R) << "\n";
    }
    return 0;
}
```