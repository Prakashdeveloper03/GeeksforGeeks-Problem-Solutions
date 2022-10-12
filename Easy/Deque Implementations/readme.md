# Deque Implementations
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

Given a deque and Q queries. The task is to perform some operation on dequeue according to the queries as given below:
1. pb: query to push back the element x.
2. pf: query to push element x(given with query) to the front of the deque.
3. pp_b(): query to delete element from the back of the deque.
4. f: query to return a front element from the deque.

__Example 1:__
```
Input:
5
pf 5
pf 10
pb 6
f
pp_b

Output:
10

Explanation:
1. After push front deque will be {5}
2. After push front deque will be {10, 5}
3. After push back deque will be {10, 5, 6}
4. Return front element which is 10
5. After pop back deque will be {10, 5}
```

__Example 2:__
```
Input:
2
pf 5
f

Output:
5

Explanation:
1. After push front deque will be {5}
2. Return front element which is 5
```

**Your Task:**

Your task is to complete the following functions:
**push_back_pb():** Push back the given element and then driver code prints that element.
**push_front_pf():** Push front the given element and then driver code prints that element.
**pop_back_ppb():** Pop the back element (if exists) and then the driver code prints the size of the deque.
**front_dq():** Return the front elements if it exists, else return -1. The driver code prints the return value.

**Expected Time Complexity**: O(1)

**Expected Auxiliary Space**: O(1)

__Constraints:__
- 1 ≤ Number of queries ≤ 10<sup>5</sup>

### Solution
```java
import java.util.ArrayDeque;
import java.util.Scanner;

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            ArrayDeque<Integer> dq = new ArrayDeque<>();
            int queries = sc.nextInt();
            while (queries-- > 0) {
                String s = sc.next().trim();
                if (s.equals("pb")) {
                    int x = Integer.parseInt(sc.nextLine().trim());

                    push_back_pb(dq, x);
                    System.out.println(dq.peekLast());
                }

                else if (s.equals("pf")) {
                    int x = Integer.parseInt(sc.nextLine().trim());

                    push_front_pf(dq, x);
                    System.out.println(dq.peekFirst());
                }

                else if (s.equals("pp_b")) {
                    pop_back_ppb(dq);
                    System.out.println(dq.size());
                }

                else {
                    int x = front_dq(dq);
                    System.out.println(x);
                }
            }
        }
        sc.close();
    }

    public static void push_back_pb(ArrayDeque<Integer> dq, int x) {
        dq.offerLast(x);
    }

    public static void pop_back_ppb(ArrayDeque<Integer> dq) {
        dq.pollLast();
    }

    public static int front_dq(ArrayDeque<Integer> dq) {
        if (dq.isEmpty()) {
            return -1;
        }

        return dq.peekFirst();
    }

    public static void push_front_pf(ArrayDeque<Integer> dq, int x) {
        dq.offerFirst(x);
    }
}
```