# C++ Function overloading
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Gurkaran is fascinated on how can we know the exact volume of some objects just by knowing the some of their dimensions but he does not actually know how it actually works. Can you help him find the volume of a cube, a cylinder, and a rectangular box?

**Note:** Invest time in studying the locked code.

- **Take value of pie = 3.14159**

**Input:**

First line contains the number of test cases
and each test case have a single line query where in each query first integer denotes if object given is a cube, cylinder or box and remaining integer in  the query denotes objects diamention.

1. represents cube

2. represents a cylinder

3. represents a rectangular box

All the integer values in a query are space separated.

**Output:**

The output should consist of single integer or double value (depending upon the object) which depicts the volume of that object.

**Constraints:**

- 1 <= t <= 100
- 0 <= diamentions <= 100
- first number in a query = {1, 2, 3}

**Example:**
```
Input:
3
1 2
2 1 2
3 1 2 3

Output:
8
6.29038
6
```

### Solution
```cpp
#include <iostream>
using namespace std;
void volume(int s)
{
    cout << s * s * s << endl;
}

void volume(int r, int h)
{
    cout << 3.14159 * r * r * h << endl;
}

void volume(int l, int b, int h)
{
    cout << l * b * h << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;

        switch (q)
        {
        case 1:
            int edge;
            cin >> edge;
            volume(edge);
            break;

        case 2:
            int radius, heigh;
            cin >> radius >> heigh;
            volume(radius, heigh);
            break;

        case 3:
            int length, width, height;
            cin >> length >> width >> height;
            volume(length, width, height);
            break;
        }
    }
    return 0;
}
```