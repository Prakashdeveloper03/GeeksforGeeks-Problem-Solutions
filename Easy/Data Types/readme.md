# Data Types
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Working with Data Types is very important in the programming world. Here, we will learn to manipulate the basic data types in CPP.
You will be given four different variables of different data types: a (int), b (float), c (double), l (long long), d (string). Your task is to do step-wise operations as given below:
1. Divide b by c.
2. Divide b by a.
3. Divide c by a (cast to int).
4. Add result of step 3 with l.
5. Print the given string, and the 4th (0-based indexing) character of the string both separated by a space.

__Example 1:__
```
Input:
1 2 3 5
gfgc
Output:
0.666667 2 3 8
gfgc c
Explanation: a = 1, b = 2, c = 3,
l = 5, d = gfgc
b/c = 0.666667
b/a = 2
c/a = 3
(c/a)+l = 8
d = gfgc
d[3] = c
```
__Your Task__

Don't worry about the taking input. Just complete the function **dataTypes(int a, float b, double c, long long l, string d)**

__Constraints:__
- 1 <= a, b, c <= 10<sup>6</sup>
- 1 <= l <= 10<sup>18</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void dataTypes(int a, float b, double c, long long l, string d)
{
    float p = b / c;
    double q = b / a;
    int r = c / a;
    long long m = r + l;
    cout << p << " " << q << " " << r << " " << m << endl;
    cout << d << " " << d[3] << endl;
}

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> l >> d;
        dataTypes(a, b, c, l, d);
    }
    return 0;
}
```