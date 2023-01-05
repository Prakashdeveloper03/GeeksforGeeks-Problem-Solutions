# Possible Words From Phone Digits
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a keypad as shown in the diagram, and an `N` digit number which is represented by array `a[]`, the task is to list all words which are possible by pressing these numbers.

__Example 1:__
```
Input: N = 3, a[] = {2, 3, 4}
Output:
adg adh adi aeg aeh aei afg afh afi
bdg bdh bdi beg beh bei bfg bfh bfi
cdg cdh cdi ceg ceh cei cfg cfh cfi
Explanation: When we press 2,3,4 then
adg, adh, adi, ... cfi are the list of
possible words.
```
__Example 2:__
```
Input: N = 3, a[] = {3, 4, 5}
Output:
dgj dgk dgl dhj dhk dhl dij dik dil
egj egk egl ehj ehk ehl eij eik eil
fgj fgk fgl fhj fhk fhl fij fik fil
Explanation: When we press 3,4,5 then
dgj, dgk, dgl, ... fil are the list of
possible words.
```
__Your Task__

You don't need to read input or print anything. You just need to complete the function **possibleWords()** that takes an array a[] and N as input parameters and returns an array of all the possible words in lexicographical increasing order.

__Expected Time Complexity:__ O(4<sup>N</sup> * N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10
- 2 ≤ a[i] ≤ 9

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(int a[], int i, int n, vector<string> val, string op, vector<string> &v)
    {
        if (i == n)
        {
            v.push_back(op);
            return;
        }

        for (auto x : val[a[i]])
        {
            op.push_back(x);
            solve(a, i + 1, n, val, op, v);
            op.pop_back();
        }
    }

public:
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> val = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;

        solve(a, 0, N, val, "", ans);

        return ans;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<string> res = obj.possibleWords(a, N);
        for (string i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
```