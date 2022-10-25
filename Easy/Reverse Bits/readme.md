# Reverse Bits
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a **32 bit number X**, reverse its binary form and print the answer in decimal.

__Example 1:__
```
Input:
X = 1
Output:
2147483648
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get,
10000000000000000000000000000000,
whose decimal value is 2147483648.
```
__Example 2:__
```
Input:
X = 5
Output:
2684354560
Explanation:
Binary of 5 in 32 bits representation-
00000000000000000000000000000101
Reversing the binary form we get,
10100000000000000000000000000000,
whose decimal value is 2684354560.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **reversedBits()** which takes an Integer X as input and returns the answer.

__Expected Time Complexity:__ O(log(X))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 0 <= X <= 2<sup>32</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long reversedBits(long long X)
    {
        string str = bitset<32>(X).to_string();
        reverse(str.begin(), str.end());
        return stoll(str, 0, 2);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X;
        cin >> X;
        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
```