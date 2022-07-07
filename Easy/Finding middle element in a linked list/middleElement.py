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
