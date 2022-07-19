# Sorting Elements of an Array by Frequency
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array `A[]` of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

__Input:__

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub> denoting the elements of the array.

__Output:__

For each testcase, in a new line, print each sorted array in a seperate line. For each array its numbers should be seperated by space.

__Constraints:__

- 1 ≤ T ≤ 70
- 30 ≤ N ≤ 130
- 1 ≤ A<sub>i</sub> ≤ 60

__Example:__
```
Input:
2
5
5 5 4 6 4
5
9 9 9 2 5

Output:
4 4 5 5 6
9 9 9 2 5

Explanation:
- Testcase 1: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.

- Testcase 2: The highest frequency here is 3. The element 9 has the highest frequency. So 9 9 9 comes first. Now both 2 and 5 have same frequency. So we print smaller element first.
The output is 9 9 9 2 5.
```

### Solution
```py
from functools import cmp_to_key

def sortByVal(a, b):
    return a[0] - b[0] if (a[1] == b[1]) else b[1] - a[1]

def sortByFreq(a, n):
    res = []
    m = {}
    for i in range(n):
        m[a[i]] = m[a[i]] + 1 if (a[i] in m) else 1
    v = [[key, value] for key, value in m.items()]
    v.sort(key=cmp_to_key(sortByVal))

    for item in v:
        while item[1]:
            res.append(item[0])
            item[1] -= 1
    return res

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        res = sortByFreq(arr, n)
        for val in res:
            print(val, end=" ")
        print()
```