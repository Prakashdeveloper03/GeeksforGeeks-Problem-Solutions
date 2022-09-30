# Delete array elements which are smaller than next or become smaller
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array arr[] and a number k. The task is to delete k elements which are smaller than next element (i.e., we delete arr[i] if arr[i] < arr[i+1]) or become smaller than next because next element is deleted.

__Example 1:__
```
Input : arr[ ] = {20, 10, 25, 30, 40}
        and K = 2
Output : 25 30 40
Explanation:
First we delete 10 because it follows
arr[i] < arr[i+1]. Then we delete 20
because 25 is moved next to it and it
also starts following the condition.
```
__Example 2:__
```
Input : arr[ ] = {3, 100, 1} and K = 1
Output :  100 1
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **deleteElement()** that takes an array (arr), sizeOfArray (n), an integer K and return the array arr[] after deleting the k elements from the array if possible, else print the left array as it is. The driver code takes care of the printing.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 2 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ K < N

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
vector<int> deleteElement(int arr[], int n, int k);
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        vector<int> v;

        v = deleteElement(arr, n, k);
        vector<int>::iterator it;
        for (it = v.begin(); it != v.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}

vector<int> deleteElement(int arr[], int n, int k)
{
    stack<int> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {

        while (!(s.empty()) && s.top() < arr[i] && k != 0)
        {
            s.pop();
            k--;
        }
        s.push(arr[i]);
    }

    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    reverse(v.begin(), v.end());
    return v;
}
```