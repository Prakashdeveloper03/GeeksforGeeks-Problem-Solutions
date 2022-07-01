# Implement strstr
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

**Note:** You are not allowed to use inbuilt function.

__Example 1:__
```
Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
```
__Example 2:__
```
Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).
```
__Your Task__

You don't have to take any input. Just complete the **strstr()** function which takes two strings **str, target** as an input parameter. The function returns `-1` if no match if found else it returns an integer denoting the first occurrence of the x in the string `s`.

__Expected Time Complexity:__ O(|s|*|x|)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= |s|,|x| <= 100

### Solution
```py
def strstr(s,x):
    return s.index(x) if x in s else -1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s, p = input().strip().split()
        print(strstr(s, p))
```

