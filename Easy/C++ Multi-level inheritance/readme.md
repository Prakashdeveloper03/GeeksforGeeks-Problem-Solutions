# C++ Multi-level inheritance
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Ankit is a very competitive person and always tries to compare him to other. He has got 5 subjects in his course and he wants to make a list of total marks and average marks of the students in his class with their roll numbers. He wants to use the concept of multi-level inheritance doing this. Help him achieve the required goal.

Student class is already been created.

Create 2 classes:

- Test: containing the marks of a student in 5 subjects inheriting class student ( having roll number of the student).
- Result: containing the function Display() to compute the total and average and then displaying the output as Roll number, total and average which are space separated.

**Input:**

Most of the input is handled for you by the locked code in the editor.
The first line will contain the number of test cases(number of students)
Each test case has roll number of student in the first line followed by 5 space separated floating numbers in the second line.

**Output:**

For each test case or student, the output should consist of 3 space-separated values- Roll number, total marks, average marks

**Constraints:**

- 1 < T <= 100
- 1 < n < 100
- 0 <= marks <= 100

**Example:**
```
Input:
3
1
10 10 10 10 10
2
8 8 8 8 8
3
7 7 7 7 7

Output:
1 50 10
2 40 8
3 35 7
```
### Solution
```cpp
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }

    void display_number()
    {
        cout << roll_number << endl;
    }
};

class test : public student
{
public:
    float totalmarks = 0, avgmarks = 0;
    void set_marks(float temp[])
    {

        for (int i = 0; i < 5; i++)
        {
            totalmarks += temp[i];
        }
        avgmarks = totalmarks / 5;
    }
};

class result : public test
{
public:
    void display()
    {
        cout << roll_number << " " << totalmarks << " " << avgmarks;
        cout << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        result student1;
        int n;
        cin >> n;
        student1.set_number(n);
        float temp[5];
        int i;

        for (i = 0; i < 5; i++)
            cin >> temp[i];

        student1.set_marks(temp);
        student1.display();
    }

    return 0;
}
```