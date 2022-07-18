# Java Collections | Set 7 (LinkedList)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given only a pointer to a node to be deleted in a singly linked list. Print the whole Linked List after deletion.

**Input:**

The first line of input contains an element T, denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line of each test case contains two integers N denoting the no of elements of the linked list and P denoting the number of the node which is to be deleted (starting from 0) . Then in the next line are N space separated values of the linked list.

**Output:**

The output for each test case will be the space separated elements of the updated linked list.


__Example 1:__
```
Input:
2
5 2
1 2 3 4 5
4 0
1 3 6 9

Output:
1 2 4 5
3 6 9
```

__Constraints:__
- 1 <= T <= 100
- 2 <= N <= 10<sup>3</sup>
- 0 <= P < (N-1)

### Solution
```java
import java.io.*;
import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int d) {
        this.data = d;
        this.next = null;
    }
}

public class LinkedList {
    public static Node cur2 = null;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            Node head = null;
            Node cur = null;
            int n = sc.nextInt();
            int p = sc.nextInt();
            cur = null;
            for (int i = 0; i < n; i++) {
                int d = sc.nextInt();
                Node ptr = new Node(d);
                if (head == null) {
                    head = ptr;
                    cur = ptr;
                } else {
                    cur.next = ptr;
                    cur = ptr;
                }
            }
            cur2 = head;
            while (p-- > 0) {
                cur2 = cur2.next;
            }
            GfG g = new GfG();
            g.deleteNode(cur2);
            while (head != null) {
                System.out.print(head.data + " ");
                head = head.next;
            }
            System.out.println();
        }
        sc.close();
    }
}

class GfG {
    public void deleteNode(Node node) {
        if (node.next == null) {
            node = null;
        }
        node.data = node.next.data;
        node.next = node.next.next;
    }
}
```