# Recursive sequence
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/Sublime_Text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

A function F is defined as follows `F(n)= (1) +(2\*3) + (4\*5\*6) ...` upto n terms (look at the examples for better clarity). Given an integer n, determine the F(n).

**Note:** As the answer can be very large, return the answer modulo 10<sup>9</sup>+7.


__Example 1:__
```
Input: n = 5
Output: 365527
Explanation: 
F(5) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 = 365527.
```
__Example 2:__
```
Input: n = 7
Output: 6006997207
Explanation: 
F(5) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 + 
16*17*18*19*20*21 + 22*23*24*25*26*27*28 = 6006997207.
6006997207 % 1000000007 = 6997165
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function `sequence()` which takes an integer n as an input parameter and returns the value of `F(n)`.

__Constraints:__
- 1 ≤ n ≤ 10<sup>3</sup>

### Solution
```java
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    long long sequence(int n) {
        long long result;
        int count = 1, mod = 1000000007;
        for(int i = 1; i <= n; i++) {
            long mul = 1;
            for(int j = 1; j <= i; j++) {
                mul = (mul * (count++)) % mod;
            }
            result = (result + mul) % mod;
        }
        return result;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
```