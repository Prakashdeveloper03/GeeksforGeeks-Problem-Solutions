# Finding middle element in a linked list
![made-with-python](https://img.shields.io/badge/Made%20with-Python-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
**1 -> 2 -> 3 -> 4 -> 5**, then the middle node of the list is `3`.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is **1 -> 2 -> 3 -> 4 -> 5 -> 6**, then the middle node of the list is `4`.

__Example 1:__
```
Input:
LinkedList: 1->2->3->4->5
Output: 3
Explanation:
Middle of linked list is 3.
```
__Example 2:__
```
Input:
LinkedList: 2->4->6->7->5->1
Output: 7
Explanation:
Middle of linked list is 7.
```
__Your Task__

The task is to complete the function **getMiddle()** which takes a head reference as the only argument and should return the data at the middle node of the linked list.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 5000

### Solution
```py
class Solution:
    def findMid(self, head):
        if not head:
            return -1
        count = 0
        ptr = head
        while ptr:
            count += 1
            ptr = ptr.next
        mid = int(count / 2) + 1
        for _ in range(1, mid):
            head = head.next
        return head.data


class node:
    def __init__(self):
        self.data = None
        self.next = None


class Linked_List:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, data):
        if self.head is None:
            self.head = node()
            self.tail = self.head
            self.head.data = data

        else:
            new_node = node()
            new_node.data = data
            new_node.next = None
            self.tail.next = new_node
            self.tail = self.tail.next


def printlist(head):
    temp = head
    while temp is not None:
        print(temp.data, end=" ")
        temp = temp.next
    print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        list1 = Linked_List()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in values:
            list1.insert(i)
        print(Solution.findMid(list1.head))
```