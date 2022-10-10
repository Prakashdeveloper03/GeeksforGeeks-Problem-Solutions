# Java Iterator
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

It is a **universal iterator** as we can apply it to any Collection object. By using Iterator, we can perform both read and remove operations.Try this problem using **Iterator**.

Given an array `arr[]` of `n` integrs which are to be put in an ArrayList and an integer `k`. Iterate the Array List using iterator and remove all the numbers of the ArrayList which are less than k. And then return the sorted ArrayList.

__Example 1:__
```
IInput:
n = 5, k = 8
arr[] = {1, 6, 9, 2, 11}
Output:
[9, 11]
Explanation:
The numbers 1, 6 and 2 are less than 8,
and so they are removed.
```
__Example 2:__
```
Input:
n = 4, k = 13
arr[] = {1, 4, 6, 9}
Output:
[]
Explanation:
All the numbers are less than 13,
and so they are removed.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **javaIterator()** which takes 2 Integers n, k, and an array arr[] of n integers as input and returns a sorted ArrayList after removing all elements less than k.

**Expected Time Complexity:** O(N)

**Expected Auxiliary Space:** O(N)

__Constraints:__
- 1 <= n, k <= 10<sup>5</sup>
- 1 <= arr[i] <= 10<sup>5</sup>

### Solution
```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S[] = read.readLine().split(" ");
            int n = Integer.parseInt(S[0]);
            int k = Integer.parseInt(S[1]);

            int[] arr = new int[n];
            String S1[] = read.readLine().split(" ");

            for (int i = 0; i < n; i++)
                arr[i] = Integer.parseInt(S1[i]);

            Solution ob = new Solution();
            System.out.println(ob.javaIterator(n, k, arr));
        }
    }
}

class Solution {
    ArrayList<Integer> javaIterator(int n, int k, int[] arr) {
        ArrayList<Integer> arrList = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            arrList.add(arr[i]);
        }
        Iterator<Integer> it = arrList.iterator();
        while (it.hasNext()) {
            int m = it.next();
            if (m < k)
                it.remove();
        }
        Collections.sort(arrList);
        return arrList;
    }
};
```