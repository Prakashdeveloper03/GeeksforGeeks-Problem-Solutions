# Yes XOR No
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given two arrays `A[]` and `B[]`, each of size N, where each element A<sub>i</sub> and B<sub>j</sub> are distinct. Let's consider an integer X is the count of all different pairs of A<sub>i</sub> and B<sub>j</sub>, such that A<sub>i</sub> XOR B<sub>j</sub> is present in any of the two arrays. Return "Yes" (case-sensitive) if X is even, else return "No".

__Example 1:__
```
Input:
N =  3
A[] = {1, 5, 7}
B[] = {2, 4, 8}
Output:
Yes
Explanation:
XOR(1,2)=3
XOR(1,4) = 5 is present in A[]
XOR(1,8) = 9
XOR(5,2) = 7 is present in A[]
XOR(5,4) = 1 is present in A[]
XOR(5,8) = 13
XOR(7,2) = 5 is present in A[]
XOR(7,4) = 3
XOR(7,8)=15
Out of all these XOR operations,
5,7,1,5 are present, so count of X = 4
which is even. Hence the output is "Yes".
```
__Example 2:__
```
Input:
N =  2
A[] = {1, 5}
B[] = {2, 4}
Output:
Yes
Explanation:
XOR(1,2) = 3
XOR(1,4) = 5 is present in A[]
XOR(5,2)=7
XOR(5,4)=1 is present in A[]
Out of all these XOR operations,
1,5 are present,
So count of X = 2 which is even.
Hence the output is "Yes".
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **yesXorNo()** which takes an Integer N and two arrays A[] and B[] of size N as input and returns "Yes" if the count of X is even, else "No".

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>
- 1 <= A[i],B[i] <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string yesXorNo(int N, long long A[], long long B[])
    {
        return "Yes";
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
        long long A[N], B[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];
        Solution ob;
        cout << ob.yesXorNo(N, A, B) << endl;
    }
    return 0;
}
```