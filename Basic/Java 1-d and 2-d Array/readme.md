# Java 1-d and 2-d Array
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a integer `n`. We have n*n values of a 2-d array, and  n values of 1-d array. Task is to find the sum of the left diagonal values of the 2-d array and the max element of the 1-d array and print them with space in between.

__Example 1:__
```
Input : arr[][] = {{1,2,3}, {4,5,6}, {7, 8,9}}
        and N = 3
brr[] = {3, 6, 9}
Output : 15 9
Explanation:
1 2 3
4 5 6
7 8 9
So, this sum of left diagonal (1+ 5 + 9) = 15
The maximum element in an array brr is 9
So, will return {15, 9} as an answer.
```
__Example 2:__
```
Input : arr[][] = {{1,2}, {1, 2}} and N = 2
brr[] = {10, 1}
Output :  3 10
```
__Your Task__

This is a function problem. The input is already taken care of by the driver code. You only need to complete the function **array()** that takes a two-dimension array (a), another one dimension array (b), sizeOfArray (n), and return the ArrayList which is having the sum of the diagonal elements of the array a and the maximum number of the array b. The driver code takes care of the printing.

**Expected Time Complexity:** O(N<sup>2</sup>)

**Expected Auxiliary Space:** O(1).

__Constraints:__
- 1 ≤ n ≤ 100
- 1 ≤ a[i][j], b[i] ≤ 10<sup>3</sup>

### Solution
```java
import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a[], b;
            a = new int[n][n];
            b = new int[n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int p = sc.nextInt();
                    a[i][j] = p;
                }
            }
            for (int i = 0; i < n; i++) {
                int p = sc.nextInt();
                b[i] = p;
            }
            Complete obj = new Complete();
            ArrayList<Integer> ans;
            ans = obj.array(a, b, n);
            for (int i : ans)
                System.out.print(i + " ");
            System.out.println();
        }
        sc.close();
    }
}

class Complete {
    public ArrayList<Integer> array(int a[][], int b[], int n) {
        ArrayList<Integer> c = new ArrayList<Integer>();
        int max = Arrays.stream(b).max().getAsInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + a[i][i];
        }
        c.add(sum);
        c.add(max);
        return c;
    }
}
```