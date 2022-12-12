# Squares in N*N Chessboard
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Find total number of Squares in a N*N cheesboard.

__Example 1:__
```
Input:
N = 1
Output:
1
Explanation:
A 1*1 chessboard has only 1 square.
```
__Example 2:__
```
Input:
N = 2
Output:
5
Explanation:
A 2*2 chessboard has 5 squares.
4 1*1 squares and a 2*2 square.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **squaresInChessBoard()** which takes an Integer N as input and returns the number of squares in a N*N chessboard.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long squaresInChessBoard(long long N)
    {
        long long sum = 0;
        for (long long i = 1; i <= N; i++)
        {
            sum += i * i;
        }
        return sum;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}
```