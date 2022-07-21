# Largest prime factor
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number `N`, the task is to find the largest prime factor of that number.

__Example 1:__
```
Input:
N = 5
Output:
5
Explanation:
5 has 1 prime factor
i.e 5 only.
```
__Example 2:__
```
Input:
N = 24
Output:
3
Explanation:
24 has 2 prime factors
3 and 2 in which 3 is
greater
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **largestPrimeFactor()** which takes an integer N as input parameters and returns an integer, largest prime factor of N.

__Expected Time Complexity:__ O(sqrt(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    long long int largestPrimeFactor(int N)
    {
        vector<int> factor;
        int ans = 0;
        if (isPrime(N) == true)
        {
            return N;
        }
        if (isPrime(N) == false)
        {
            for (int i = 1; i <= N / 2; i++)
            {
                if (N % i == 0)
                {
                    isPrime(i);
                    if (isPrime(i) == true)
                    {
                        factor.push_back(i);
                    }
                }
            }
        }
        ans = *max_element(factor.begin(), factor.end());
        return ans;
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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
}
```