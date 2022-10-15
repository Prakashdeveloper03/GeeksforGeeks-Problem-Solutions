# Numbers containing 1, 2 and 3
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `arr[]` of `n` numbers. The task is to print only those numbers whose digits are from set {1,2,3}.

__Example 1:__
```
Input:
n = 3
arr[] = {4,6,7}
Output: -1
Explanation: No elements are there in the
array which contains digits 1, 2 or 3.
```
__Example 2:__
```
n = 4
arr[] = {1,2,3,4}
Output: 1 2 3
Explanation: 1, 2 and 3 are the only
elements in the array which conatins
digits as 1, 2 or 3.
```
__Your Task__

Complete **findAll** function and marked **satisfied number as '1'** in the map `mp` in range 1 to 1000000. If no number is marked as satified number -1 will automatically be printed by the drivers code. The driver code prints the elements in sorted order.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 <= n <= 10<sup>6</sup>
- 1 <= A[i] <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
bool check(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return true;
    }
    return false;
}

void findAll()
{
    bool flag = true;
    for (int i = 1; i < 1000000; i++)
    {
        flag = true;
        int num = i;
        while (num > 0)
        {
            int d = num % 10;
            if (!check(d))
            {
                flag = false;
                break;
            }
            num /= 10;
        }
        if (flag)
            mp[i] = 1;
    }
}

int main()
{
    findAll();
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; ++i)
        {
            if (mp[arr[i]])
            {
                cout << arr[i] << " ";
                flag = 1;
            }
        }
        if (!flag)
            cout << "-1";
        cout << endl;
    }
    return 0;
}
```

