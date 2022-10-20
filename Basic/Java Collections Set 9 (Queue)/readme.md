# Java Collections | Set 9 (Queue)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement different operations on a queue q .

**Input:**

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types
1. a x (Pushes an element x at the end of the queue q )
2. r (if queue is not empty pops the front element and prints it, else prints -1)
3. s (prints the size of the queue)
4. p (if queue is not empty prints the front element of the queue, else prints -1)

**Output:**

The output for each test case will  be space separated integers denoting the results of each query .

**Constraints:**
- 1 <= T <= 100
- 1 <= Q <= 100

**Example:**
```
Input
2
5
a 5 a 10 a 15 r p
4
a 5 r p s
 
Output:
5 10
5 -1 0
```

### Solution
```java
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class gfg {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            QueueClass obj = new QueueClass();
            while (n-- > 0) {
                char p = sc.next().charAt(0);
                if (p == 'a') {
                    int k = sc.nextInt();
                    obj.addElement(k);
                } else if (p == 'r')
                    obj.RemoveElement();
                else if (p == 'p')
                    obj.peekElement();
                else
                    obj.Size();
            }
            System.out.println();
        }
        sc.close();
    }
}

class QueueClass {
    Queue<Integer> q;

    QueueClass() {
        q = new LinkedList<>();
    }

    public void addElement(int key) {
        q.add(key);
    }

    public void RemoveElement() {
        if (q.size() == 0)
            System.out.print("-1" + " ");
        else
            System.out.print(q.remove() + " ");
    }

    public void peekElement() {
        if (q.size() == 0)
            System.out.print("-1" + " ");
        else
            System.out.print(q.peek() + " ");
    }

    public void Size() {
        System.out.print(q.size() + " ");
    }
}
```