# Operations on PriorityQueue
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given N integers, your task is to add these elements to the PriorityQueue. Also, given M integers, the task is to check if the given element is present in the PriorityQueue or not.
If the element is present, then 1 is printed by the driver code, after that the max element of priority queue is printed. Then the driver code deletes the max element.

**Note:** Here the driver code has implemented the PriorityQueue as a max-heap.

__Example:__
```
Input:
8
1 2 3 4 5 2 3 1
5
1 3 2 9 10

Output:
1
5
1
4
1
3
-1
-1

Explanation:
After inserting given elements, when we find 1,
which is present, so 1 gets printed, and then the
top element of the PriorityQueue which is 5 gets
printed, and then it gets deleted. Similarly, when
element is not present, just -1 is printed.
```
__Your Task__

Your task is to complete the following functions:
**insert(PriorityQueue q, int k)** : You just insert k into q.
**find(PriorityQueue q, int k)** : You return true if k is in q, else you return false.
**delete(PriorityQueue q)** : You delete the top element (which is also the max element) and return it.

__Constraints:__
- 1 <= N <= 10<sup>3</sup>
- 1 <= M <= 10<sup>3</sup>

### Solution
```java
import java.util.*;

class Geeks {
    // Function to insert element into the queue
    public void insert(PriorityQueue<Integer> q, int k) {
        q.add(k);
    }

    // Function to find an element k
    public boolean find(PriorityQueue<Integer> q, int k) {
        return q.contains(k);
    }

    // Function to delete the max element from queue
    public int delete(PriorityQueue<Integer> q) {
        return q.poll();
    }
}

class Operations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        while (testcase-- > 0) {
            PriorityQueue<Integer> p_queue = new PriorityQueue<Integer>(new Comparator<Integer>() {
                public int compare(Integer w1, Integer w2) {
                    return w2.compareTo(w1);
                }
            });

            int n = sc.nextInt();
            Geeks obj = new Geeks();

            for (int i = 0; i < n; i++) {
                int k = sc.nextInt();
                obj.insert(p_queue, k);
            }
            int x = sc.nextInt();
            for (int i = 0; i < x; i++) {
                int k = sc.nextInt();
                boolean f = obj.find(p_queue, k);
                if (f != false) {
                    System.out.println("1");
                    System.out.println(obj.delete(p_queue));
                } else {
                    System.out.println("-1");
                }
            }
        }
        sc.close();
    }
}
```