# Replace all 0's with 5
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given an integer N. You need to convert all zeroes of N to 5.

__Example 1:__
```
Input:
N = 1004
Output: 1554
Explanation: There are two zeroes in 1004
on replacing all zeroes with "5", the new
number will be "1554".
```
__Example 2:__
```
Input:
N = 121
Output: 121
Explanation: Since there are no zeroes in
"121", the number remains as "121".
```
__Your Task__

Your task is to complete the function convertFive() which takes an integer N as an argument and replaces all zeros in the number N with 5. Your function should return the converted number.

__Expected Time Complexity:__ O(K)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= n <= 10000

### Solution
```py
def convertFive(n):
    letters = list(str(n))
    for i in range(len(letters)):
        if letters[i] == "0":
            letters[i] = "5"
    return int("".join(letters))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(convertFive(n))
```