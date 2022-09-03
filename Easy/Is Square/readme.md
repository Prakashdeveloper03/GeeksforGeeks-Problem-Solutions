# Is Square
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given four different points in space. Find whether these points can form a square or not.

__Example 1:__
```
Input:
x1 = 20, y1 = 10, x2 = 10, y2 = 20,
x3 = 20, y3 = 20, x4 = 10, y4 = 10
Output:
Yes
Explanation:
The points (20,10), (10,20), (20,20),
(10,10) forms a square.
```
__Example 2:__
```
Input:
x1 = 2, y1 = 1, x2 = 10, y2 = 20,
x3 = 5, y3 = 6, x4 = 10, y4 = 10
Output:
No
Explanation:
The points (2,1), (10,20), (5,6),
(10,10) doesn't form a square.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **isSquare()** which takes 8 Integers x1, y1, x2, y2, x3, y3, x4, and y4 as input and returns whether these points form a square.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 10<sup>3</sup> ≤ x1, y1, x2, y2, x3, y3, x4, y4 ≤ 10<sup>3</sup>

### Solution
```py
class Solution:
    def isSquare(self, x1, y1, x2, y2, x3, y3, x4, y4):
        return "Yes" if len({x1, y1, x2, y2, x3, y3, x4, y4}) == 2 else "No"

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split())
        print(Solution().isSquare(x1, y1, x2, y2, x3, y3, x4, y4))
```