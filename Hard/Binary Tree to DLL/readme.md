# Binary Tree to DLL
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.

![image](http://www.geeksforgeeks.org/wp-content/uploads/TreeToList.png)

__Example 1:__
```
Input:
      1
    /  \
   3    2
Output:
3 1 2
2 1 3
Explanation: DLL would be 3<=>1<=>2
```
__Example 2:__
```
Input:
       10
      /   \
     20   30
   /   \
  40   60
Output:
40 20 60 10 30
30 10 60 20 40
Explanation:  DLL would be
40<=>20<=>60<=>10<=>30.
```
__Your Task__

You don't have to take input. Complete the function **bToDLL()** that takes root node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(H)

__Constraints:__
- 1 ≤ Number of nodes ≤ 10<sup>5</sup>
- 0 ≤ Data of a node ≤ 10<sup>5</sup>

### Solution
```java
import java.util.*;
import java.io.*;
import java.lang.*;

class Node {
    Node left, right;
    int data;

    Node(int d) {
        data = d;
        left = right = null;
    }

}

class BT_To_DLL {
    static Node buildTree(String str) throws IOException {
        if (str.length() == 0 || str.charAt(0) == 'N') {
            return null;
        }

        String ip[] = str.split(" ");
        // Create the root of the tree
        Node root = new Node(Integer.parseInt(ip[0]));
        // Push the root to the queue

        Queue<Node> queue = new LinkedList<>();

        queue.add(root);
        // Starting from the second element

        int i = 1;
        while (queue.size() > 0 && i < ip.length) {

            // Get and remove the front of the queue
            Node currNode = queue.peek();
            queue.remove();

            // Get the current node's value from the string
            String currVal = ip[i];

            // If the left child is not null
            if (!currVal.equals("N")) {

                // Create the left child for the current node
                currNode.left = new Node(Integer.parseInt(currVal));
                // Push it to the queue
                queue.add(currNode.left);
            }

            // For the right child
            i++;
            if (i >= ip.length)
                break;

            currVal = ip[i];

            // If the right child is not null
            if (!currVal.equals("N")) {

                // Create the right child for the current node
                currNode.right = new Node(Integer.parseInt(currVal));

                // Push it to the queue
                queue.add(currNode.right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node node) {
        if (node == null)
            return;
        else
            inorder(node.left);
        System.out.print(node.data + " ");
        inorder(node.right);
    }

    public static void printList(Node head) {
        Node prev = head;
        while (head != null) {
            System.out.print(head.data + " ");
            prev = head;
            head = head.right;
        }

        System.out.println();
        while (prev != null) {
            System.out.print(prev.data + " ");
            prev = prev.left;
        }
    }

    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String s = br.readLine();
            Node root = buildTree(s);
            Solution g = new Solution();

            Node ans = g.bToDLL(root);
            printList(ans);
            t--;
            System.out.println();
        }

    }
}

class Solution {
    Node prev = null, head = null;

    Node bToDLL(Node root) {
        if (root == null)
            return null;

        bToDLL(root.left);
        if (prev == null)
            head = root;

        else {
            root.left = prev;
            prev.right = root;
        }
        prev = root;
        bToDLL(root.right);
        return head;
    }
}
```