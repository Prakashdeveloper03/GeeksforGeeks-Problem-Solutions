# C++ Sets
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given two sets A and B of size N and M . Perform set operation i.e union, intersection and difference on sets using set_union, set_difference and set_intersection functions of STL.

__Example 1:__
```
Input: N = 4, M = 5
A = {1, 2, 3, 4}
B = {3, 4, 5, 6, 7}
Output:
1 2 3 4 5 6 7
1 2
3 4
Explaination:
Union of two sets A (1 2 3 4) and
B (3 4 5 6 7) is (1 2 3 4 5 6 7).
Difference A-B is 1 2.
The intersection is 3 4.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **setOperations()** which takes set A and set B as input parameters and returns a list containing the three desired sets.

__Expected Time Complexity:__ O(N + M)

__Expected Auxiliary Space:__ O(N + M)

__Constraints:__
- 1 <= N, M <= 1000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<set<int>> setOperations(set<int> A, set<int> B)
    {
        vector<set<int>> res;

        vector<int> tempVec;
        set<int> tempS;

        set_union(
            A.begin(), A.end(),
            B.begin(), B.end(),
            back_inserter(tempVec));

        tempS.insert(tempVec.begin(), tempVec.end());
        res.emplace_back(tempS);

        tempVec.clear();
        tempS.clear();

        set_difference(
            A.begin(), A.end(),
            B.begin(), B.end(),
            back_inserter(tempVec));

        if (tempVec.empty())
        {
            tempVec.emplace_back(0);
        }

        tempS.insert(tempVec.begin(), tempVec.end());
        res.emplace_back(tempS);

        tempVec.clear();
        tempS.clear();

        set_intersection(
            A.begin(), A.end(),
            B.begin(), B.end(),
            back_inserter(tempVec));

        if (tempVec.empty())
        {
            tempVec.emplace_back(0);
        }

        tempS.insert(tempVec.begin(), tempVec.end());
        res.emplace_back(tempS);

        tempVec.clear();
        tempS.clear();

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        set<int> A, B;
        int x;
        for (int i = 0; i < N; i++)
        {
            cin >> x;
            A.insert(x);
        }
        for (int i = 0; i < M; i++)
        {
            cin >> x;
            B.insert(x);
        }
        Solution obj;
        vector<set<int>> result = obj.setOperations(A, B);
        for (int i = 0; i < 3; i++)
        {
            for (auto &it : result[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
```