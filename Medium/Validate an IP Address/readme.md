# Validate an IP Address
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255.
Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).
Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid. Your task is to complete the function isValid which returns 1 if the given IPv4 address is valid else returns 0. The function takes the IPv4 address as the only argument in the form of string.

__Example 1:__
```
Input:
IPv4 address = 222.111.111.111
Output: 1
Explanation: Here, the IPv4 address is as
per the criteria mentioned and also all
four decimal numbers lies in the mentioned
range.
```
__Example 2:__
```
Input:
IPv4 address = 5555..555
Output: 0
Explanation: 5555..555 is not a valid
IPv4 address, as the middle two portions
are missing.
```
__Your Task__

Complete the function **isValid()** which takes the address in the form of string s as an input parameter and returns 1 if this is a valid address otherwise returns 0.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= length of string <= 50

### Solution
```py
class Solution:
    def isValid(self, s):
        string = s.split(".")
        if len(string) != 4:
            return 0
        for x in string:
            if len(x) > 1 and x[0] == "0":
                return 0
            try:
                if int(x) < 0 or int(x) > 255:
                    return 0
            except Exception:
                return 0
        return 1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if Solution().isValid(s):
            print(1)
        else:
            print(0)
```