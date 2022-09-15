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
