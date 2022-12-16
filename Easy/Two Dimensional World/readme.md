# Two Dimensional World
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a 2D array A[][] of size N x N consisting of integers. The task is to print all the elements in matrix (row and column order) form.

__Example:__
```
Input:
3
1 2 3
4 5 6
7 8 9
Output:
1 2 3
4 5 6
7 8 9
Explanation:
Elements of 2D array in row-column order
are as mentioned in Sample Output.
```
__Your Task__

Your task is to complete the function **twoDimensional()** that takes two parameters: 2D array mat and N. You need to write the parameter for 2D array and print matrix.

__Constraints:__
- 1 <= T <= 10
- 1 <= N <= 100
- 1 <= A[i][j] <= 10<sup>6</sup>

### Solution
```cpp
#include <iostream>
using namespace std;
void twoDimensional(int **mat, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int N;
        cin >> N;
        int **mat;
        mat = new int *[N];
        for (int i = 0; i < N; i++)
        {
            mat[i] = new int[N];
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }
        twoDimensional(mat, N);
    }
    return 0;
}
```