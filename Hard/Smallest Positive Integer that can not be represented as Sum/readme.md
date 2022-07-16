# Smallest Positive Integer that can not be represented as Sums
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of size N, find the smallest positive integer value that is either not presented in the array or cannot be represented as a sum(coz sum means you are adding two or more elements) of some elements from the array.

__Example 1:__
```
Input:
N = 6
array[] = {1, 10, 3, 11, 6, 15}
Output:
2
Explanation:
2 is the smallest integer value that cannot
be represented as sum of elements from the array.
```
__Example 2:__
```
Input:
N = 3
array[] = {1, 1, 1}
Output:
4
Explanation:
1 is present in the array.
2 can be created by combining two 1s.
3 can be created by combining three 1s.
4 is the smallest integer value that cannot be
represented as sum of elements from the array.
```
__Your Task__

You don't need to read input or print anything. Complete the function **smallestpositive()** which takes the array and N as input parameters and returns the smallest positive integer value that cannot be represented as the sum of some elements from the array.

__Expected Time Complexity:__  O(N * Log(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>6</sup>
- 1 ≤ array[i] ≤ 10<sup>9</sup>

### Solution
```java
import java.io.*;
import java.util.*;

public class SmallestPositiveInt {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            long array[] = new long[n];
            for (int i = 0; i < n; ++i) {
                array[i] = sc.nextLong();
            }
            Solution ob = new Solution();
            System.out.println(ob.smallestpositive(array, n));
            t--;
        }
        sc.close();
    }
}

class Solution {
    long smallestpositive(long[] array, int n) {
        Arrays.sort(array);
        long ans = 1;
        for (int i = 0; i < n; i++) {
            if (ans < array[i])
                return ans;
            else
                ans += array[i];
        }
        return ans;
    }
}
```