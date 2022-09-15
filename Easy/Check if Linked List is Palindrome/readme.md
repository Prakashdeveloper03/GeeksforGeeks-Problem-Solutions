# Check if Linked List is Palindrome
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a singly linked list of size `N` of integers. The task is to check if the given linked list is palindrome or not.

__Example 1:__
```
Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
```
__Example 2:__
```
Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
```
__Your Task__

The task is to complete the function **isPalindrome()** which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>5</sup>

### Solution
```py
class Solution:
    def isPalindrome(self, head):
        temp = head
        l = []
        while temp.next is not None:
            l.append(temp.data)
            temp = temp.next
        l.append(temp.data)
        return 1 if l == l[::-1] else 0


class node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Linked_List:
    def __init__(self):
        self.head = None
        self.tail = None

    def append(self, new_value):
        new_node = node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
            return
        self.tail.next = new_node
        self.tail = new_node


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        list1 = Linked_List()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in values:
            list1.append(i)
        if Solution.isPalindrome(list1.head):
            print(1)
        else:
            print(0)
```