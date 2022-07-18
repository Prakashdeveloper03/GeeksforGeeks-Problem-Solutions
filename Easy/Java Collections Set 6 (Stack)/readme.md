# Java Collections | Set 6 (Stack)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Java provides an inbuilt object type called Stack. It is a collection that is based on the last in first out (LIFO) principle. Try this problem using Stack.

Given n elements of a stack st where the first value is the bottom-most value of the stack and the last one is the element at top of the stack, delete the middle element of the stack without using any additional data structure.

__Example 1:__
```
Input: n = 5
st = {1, 2, 3, 4, 5}
Output: 5 4 2 1
Explaination: The middle element is 3. If
it is deleted and then the values are seen
from top, this will be the order.
```

__Example 2:__
```
Input: n = 6
st = {1, 4, 9, 2, 6, 5}
Output: 5 6 2 4 1
Explaination: The middle element is 9 and if
it is deleted this will be the stack traversal.
```

**Your Task:**

You do not need to read input or print anything. Your task is to complete the function deleteMid() which takes n and st as input parameters and returns a stack where the middle element is deleted.

**Expected Time Complexity**: O(n)
**Expected Auxiliary Space**: O(n)

__Constraints:__
- 2 ≤ n ≤ 10<sup>3<sup>
- 1 ≤ st[i] ≤ 10<sup>4</sup>

### Solution
```java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(in.readLine());
            String a[] = in.readLine().trim().split("\\s+");
            int arr[] = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = Integer.parseInt(a[i]);
            Stack<Integer> st = new Stack<>();
            for (int i = 0; i < n; i++)
                st.push(arr[i]);

            Solution ob = new Solution();
            Stack<Integer> ans = new Stack<>();
            ans = ob.deleteMid(n, st);
            while (!ans.empty()) {
                int x = ans.pop();
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}

class Solution {
    public Stack<Integer> deleteMid(int n, Stack<Integer> st) {
        Collections.reverse(st);
        int mid = n / 2;
        st.remove(mid);
        Collections.reverse(st);
        return st;
    }
}
```