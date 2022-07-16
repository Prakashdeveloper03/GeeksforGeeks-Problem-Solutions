# Find median in a stream
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

__Example 1:__
```
Input:
N = 4
X[] = 5,15,1,3
Output:
5
10
5
4
Explanation:Flow in stream : 5, 15, 1, 3
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5,15)
1 goes to stream --> median 5 (5,15,1)
3 goes to stream --> median 4 (5,15,1 3)
```
__Example 2:__
```
Input:
N = 3
X[] = 5,10,15
Output:
5
7.5
10
Explanation:Flow in stream : 5, 10, 15
5 goes to stream --> median 5 (5)
10 goes to stream --> median 7.5 (5,10)
15 goes to stream --> median 10 (5,10,15)
```
__Your Task__

You are required to complete the class Solution.
It should have 2 data members to represent 2 heaps.
It should have the following member functions:

- **insertHeap()** which takes x as input and inserts it into the heap, the function should then call balanceHeaps() to balance the new heap.
- **balanceHeaps()** does not take any arguments. It is supposed to balance the two heaps.
- **getMedian()** does not take any arguments. It should return the current median of the stream.

__Expected Time Complexity:__ O(nlogn)

__Expected Auxiliary Space:__ O(n)

__Constraints:__
- 1 ≤ n ≤ 10<sup>6</sup>
- 1 <= x <= 10<sup>6</sup>

### Solution
```java
import java.util.*;

class Median {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n;
        while (t-- > 0) {
            n = sc.nextInt();
            Solution obj = new Solution();
            for (int i = 1; i <= n; i++) {
                int x = sc.nextInt();
                obj.insertHeap(x);
                System.out.println((int) Math.floor(obj.getMedian()));
            }
        }
        sc.close();
    }
}

class Solution {
    public static PriorityQueue<Integer> max = new PriorityQueue<>((a, b) -> b - a);
    public static PriorityQueue<Integer> min = new PriorityQueue<>();

    public void insertHeap(int x) {
        if (max.isEmpty() || x <= max.peek()) {
            max.add(x);
        } else {
            min.add(x);
        }

        balanceHeaps();
    }

    public void balanceHeaps() {
        if (max.size() > min.size() + 1) {
            min.add(max.poll());
        } else if (min.size() > max.size()) {
            max.add(min.poll());
        }

        getMedian();
    }

    public double getMedian() {
        if (max.size() == min.size()) {
            return (max.peek() + min.peek()) / 2.0;
        } else {
            return max.peek();
        }
    }
}
```