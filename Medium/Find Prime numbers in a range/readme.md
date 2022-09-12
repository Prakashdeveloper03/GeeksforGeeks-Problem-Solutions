# Find Prime numbers in a range
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two integers M and N, generate all primes between M and N.

__Example 1:__
```
Input:
M=1,N=10
Output:
2 3 5 7
Explanation:
The prime numbers between 1 and 10
are 2,3,5 and 7.
```
__Example 2:__
```
Input:
M=2, N=5
Output:
2,3,5
Explanation:
The prime numbers between 2 and 5 are
2,3 and 5.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **primeRange()** which takes 2 integer inputs M and N and returns a list of all primes between M and N.

__Expected Time Complexity:__ O(N * sqrt(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N, M ≤ 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
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

    vector<int> primeRange(int M, int N)
    {
        vector<int> ans;
        for (int i = M; i <= N; i++)
        {
            if (isprime(i) == true)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans)
            cout << u << " ";
        cout << "\n";
    }
}
```