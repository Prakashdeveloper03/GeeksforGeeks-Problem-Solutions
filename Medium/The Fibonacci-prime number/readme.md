# The Fibonacci-prime number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a number N, the task is to find if N is Fibonacci-prime number or not. A Fibonacci-prime is any number that is both a prime and a Fibonacci number.

__Example 1:__
```
Input: N = "5"
Output: 1
Explanation: 5 is a Fibonacci number and
prime too
```
__Example 2:__
```
Input: N = "8"
Output: 0
Explanation: 8 is a Fibonacci number but,
not a prime.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **fibonacciPrime()** which takes a string as inputs representing the number and returns 1 if the given number is a fibonacci-prime number, otherwise 0.

__Expected Time Complexity:__ O(constant)

__Expected Auxiliary Space:__ O(constant)

__Constraints:__
- 1 <= |N| <= 75

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fibonacciPrime(string N)
    {
        vector<string> arr{"2", "3", "5", "13", "89", "233", "1597", "28657", "514229",
                           "433494437", "2971215073", "99194853094755497", "1066340417491710595814572169",
                           "19134702400093278081449423917",
                           "475420437734698220747368027166749382927701417016557193662268716376935476241"};

        for (int i = 0; i < arr.size(); i++)
            if (N == arr[i])
                return 1;

        return 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string N;
        cin >> N;

        Solution ob;

        cout << ob.fibonacciPrime(N) << "\n";
    }
    return 0;
}
```