# C++ complex number addition (operator overloading)
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

This is a functional problem i.e. partial code is already done for you, invest time to study the locked code and complete the solution accordingly.

In this problem, you need to add 2 given complex numbers and print the resulting complex number using '+' operator.

Implement a class named complex containing data members as real and imaginary part of the complex number and the following function:

- void display()
- constructor to assign values to the complex number.
- operator function to add 2 numbers

**Input:**

First line of the input contains the number of test cases and each test case contains 4 space separated integer values representing the real and imaginary part of 2 complex numbers ( Real1 imaginary 1   real2 imaginary2 )

**Output:**

The output to each test case should be a single line representing the resulting complex number from the addition of given complex numbers. In the given format real + imaginary_i
for eg:  2 +3i

**Constraints:**

- 1 <= Test case <= 100

**Example:**
```
Input:
2
3 6 -1 4
2 2 -1 -1

Output:
2 + 10i
1 + 1i
```

### Solution
```cpp
#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex() {}

    complex(int real, int imag)
    {
        x = real;
        y = imag;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }

    void display()
    {
        cout << x << " + " << y << "i" << endl;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int c11, c12, c21, c22;
        cin >> c11 >> c12 >> c21 >> c22;

        complex c1, c2, c3;
        c1 = complex(c11, c12);
        c2 = complex(c21, c22);
        c3 = c1 + c2;

        c3.display();
    }
    return 0;
}
```