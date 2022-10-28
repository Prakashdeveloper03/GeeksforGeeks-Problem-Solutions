# Sum of Array Elements
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an integer array `arr` of size `n`, you need to sum the elements of arr.

__Example 1:__
```
Input:
n = 3
arr[] = {3 2 1}
Output: 6
```
__Example 2:__
```
Input:
n = 4
arr[] = {1 2 3 4}
Output: 10
```
__Your Task__

You need to complete the function **sumElement()** that takes arr and n and returns the sum. The printing is done by the driver code.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 <= n <= 10<sup>3</sup>
- 1 <= arr<sub>i</sub> <= 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
int sumElement(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sumElement(arr, n - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << sumElement(arr, n) << endl;
    }
    return 0;
}
```