#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int minEle;
    stack<pair<int, int>> s;

public:
    int getMin()
    {
        if (s.empty())
            return -1;
        return s.top().second;
    }

    int pop()
    {
        if (s.size() == 0)
            return -1;
        int val = s.top().first;
        s.pop();
        return val;
    }

    void push(int x)
    {
        if (s.size() == 0)
            s.push({x, x});
        else
        {
            minEle = min(s.top().second, x);
            s.push({x, minEle});
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution obj;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {
                int att;
                cin >> att;
                obj.push(att);
            }
            else if (qt == 2)
            {
                cout << obj.pop() << endl;
            }
            else if (qt == 3)
            {
                cout << obj.getMin() << endl;
            }
        }
        cout << endl;
    }
    return 0;
}