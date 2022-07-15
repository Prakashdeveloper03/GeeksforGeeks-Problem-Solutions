#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string first_name, last_name;

public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
    friend void check_name(student k);
};

void check_name(student k)
{
    string f, l;
    f = k.first_name;
    l = k.last_name;

    sort(f.begin(), f.end());
    sort(l.begin(), l.end());

    if (f == l)
    {
        cout << "ANAGRAM" << endl;
    }

    else
    {
        cout << "NOT ANAGRAM" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string f, l;
        cin >> f >> l;
        student s;
        s.set_name(f, l);
        check_name(s);
    }
    return 0;
}