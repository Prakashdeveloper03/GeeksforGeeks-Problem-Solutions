# C++ Generic sort
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You need to sort elements of an array where the array can be of following data-types:
- Integer
- String
- floating number

Your task is to complete the given two functions: **sortArray()** and **printArray()**.
The input line contains 2 lines. The first line contains **n(size of array)** and s separated by space. Below is the description about q.
- q = 1, means elements of the array are of integer type
- q = 2, means elements of the array are of string type
- q = 3, means elements of array are of floating digit type

The second line contains n elements of the array separated by space.
We have to print the elements in sorted form of given type of array separated by space.

__Example 1:__
```
Input:
3 3
34.23 -4.35 3.4
Output:
-4.35 3.4 34.23
Explanation:
The array is of floating type. After
sorting the elements of array are as
such:  -4.35 3.4 34.23
```
__Example 2:__
```
Input:
4 1
123 -2311 837 0
Output:
-2311 0 123 837
```
__Constraints:__
- 1 <= T <= 50
- 1 <= n <= 100
- 1 <= q <= 3

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

template <class T>
void sortArray(T a[], int n)
{
    sort(a, a + n);
}

template <class T>
void printArray(T a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, i;
        cin >> n >> q;
        int intArr[100];
        float floatArr[100];
        string strArr[100];
        switch (q)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                cin >> intArr[i];
            }
            sortArray(intArr, n);
            printArray(intArr, n);
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                cin >> strArr[i];
            }
            sortArray(strArr, n);
            printArray(strArr, n);
            break;
        case 3:
            for (i = 0; i < n; i++)
            {
                cin >> floatArr[i];
            }
            sortArray(floatArr, n);
            printArray(floatArr, n);
            break;
        }
    }
    return 0;
}
```