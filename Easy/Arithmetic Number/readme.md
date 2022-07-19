# Arithmetic Number
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given three integers  'A' denoting the first term of an arithmetic sequence , 'C' denoting the common difference of an arithmetic sequence and an integer 'B'. you need to tell whether 'B' exists in the arithmetic sequence or not.

__Example 1:__
```
Input: A = 1, B = 3, C = 2
Output: 1
Explaination: 3 is the second term of the
sequence starting with 1 and having a common
difference 2.
```
__Example 2:__
```
Input: A = 1, B = 2, C = 3
Output: 0
Explaination: 2 is not present in the sequence.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function inSequence() which takes A, B and C and returns 1 if B is present in the sequence. Otherwise, returns 0.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- -10<sup>9</sup> <= A, B, C <= 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int inSequence(int A, int B, int C)
    {
        if (C == 0)
            return A == B;
        return ((B - A) / C) >= 0 && ((B - A) % C) == 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;

        Solution ob;
        cout << ob.inSequence(A, B, C) << endl;
    }
    return 0;
}
```