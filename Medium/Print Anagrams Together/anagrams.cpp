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