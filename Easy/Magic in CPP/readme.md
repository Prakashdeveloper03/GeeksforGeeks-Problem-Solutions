# Magic in CPP
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two integers A and B. The task is to swap two numbers. Swapping here means to interchange the values of A and B.

__Example:__
```
Input:
A = 3
B = 5
Output:
5 3
Explanation:
Here, A = 3 and B = 5.
After swapping A = 5 and B = 3.
```
__Your Task__

Your task is to complete the two **swap()** functions, such that values of A and B gets interchanged.

__Constraints:__
- 1 <= A, B <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void swap(int *A, int *B)
{

    int temp = *A;
    *A = *B;
    *B = temp;
}

void swap(int &A, int &B)
{

    int temp = A;
    A = B;
    B = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        swap(A, B);
        cout << A << " " << B << endl;
        swap(&A, &B);
        cout << A << " " << B << endl;
    }
    return 0;
}
```