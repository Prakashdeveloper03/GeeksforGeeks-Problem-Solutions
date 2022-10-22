# Print Anagrams Together
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.

**Note:** The final output will be in lexicographic order.

__Example 1:__
```
Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output:
act cat tac
god dog
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
```
__Example 2:__
```
Input:
N = 3
words[] = {no,on,is}
Output:
no on
is
Explanation:
There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2.
```
__Your Task__

The task is to complete the function **Anagrams()** that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.

__Expected Time Complexity:__ O(N*|S|*log|S|)

__Expected Auxiliary Space:__ O(N*|S|)

__Constraints:__
- 1 <= N <= 100

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for (auto x : string_list)
        {
            string temp = x;
            sort(x.begin(), x.end());
            mp[x].push_back(temp);
        }

        for (auto x : mp)
        {
            ans.push_back(x.second);

            return ans;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        Solution ob;
        vector<vector<string>> result = ob.Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
```