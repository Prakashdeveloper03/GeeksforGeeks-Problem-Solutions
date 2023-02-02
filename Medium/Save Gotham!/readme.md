# Save Gotham!
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Gotham has been attacked by Joker . Bruce Wayne has deployed an automatic machine gun at each tower of Gotham. All the towers in Gotham are in a straight line. You are given no of towers 'n' followed by the height of 'n' towers. For every tower(p), find the height of the closest tower (towards the right), greater than the height of the tower(p). Now, the Print sum of all such heights (mod 1000000001).

**Note:** If for a tower(k), no such tower exists then take its height as 0.

__Example 1:__
```
Input : arr[]= {112, 133, 161, 311, 122, 512, 1212, 0, 19212}
Output : 41265
Explanation:
nextgreater(112) : 133
nextgreater(133) : 161
nextgreater(161) : 311
nextgreater(311) : 512
nextgreater(122) : 512
nextgreater(512) : 1212
nextgreater(1212) : 19212
nextgreater(0) : 19212
nextgreater(19212) : 0
add = 133 + 161 + 311 + 512 + 512 + 1212 + 19212 + 19212 + 0
add = 41265.
```
__Example 2:__
```
Input : arr[] = {5, 9, 7, 6}
Output :  9
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **save_gotham()** that takes an array (arr), sizeOfArray (n), and return the sum of next greater element of every element. The driver code takes care of the printing.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(N)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 0 ≤ A<sub>i</sub> ≤ 10<sup>4</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int save_gotham(int arr[], int n)
    {
        stack<long long> st;
        vector<long long> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }
            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();
            st.push(arr[i]);
        }
        int count = 0;
        for (int i : ans)
        {
            if (i != -1)
            {
                count += i;
            }
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.save_gotham(arr, n) << endl;
    }
    return 0;
}
```