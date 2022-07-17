# Matrix Chain Multiplication
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given a sequence of matrices, find the most efficient way to multiply these matrices together. The efficient way is the one that involves the least number of multiplications.

The dimensions of the matrices are given in an array arr[] of size N (such that N = number of matrices + 1) where the ith matrix has the dimensions (arr[i-1] x arr[i]).

__Example 1:__
```
Input: N = 5
arr = {40, 20, 30, 10, 30}
Output: 26000
Explaination: There are 4 matrices of dimension
40x20, 20x30, 30x10, 10x30. Say the matrices are
named as A, B, C, D. Out of all possible combinations,
the most efficient way is (A*(B*C))*D.
The number of operations are -
20*30*10 + 40*20*10 + 40*10*30 = 26000.
```
__Example 2:__
```
Input: N = 4
arr = {10, 30, 5, 60}
Output: 4500
Explaination: The matrices have dimensions
10*30, 30*5, 5*60. Say the matrices are A, B
and C. Out of all possible combinations,the
most efficient way is (A*B)*C. The
number of multiplications are -
10*30*5 + 10*5*60 = 4500.
```
__Your Task__

You do not need to take input or print anything. Your task is to complete the function **matrixMultiplication()** which takes the value N and the array arr[] as input parameters and returns the minimum number of multiplication operations needed to be performed.

__Expected Time Complexity:__ O(N<sup>3</sup>)

__Expected Auxiliary Space:__ O(N<sup>2</sup>)

__Constraints:__
- 2 ≤ N ≤ 100
- 1 ≤ arr[i] ≤ 500

### Solution
```java
import java.io.*;
import java.util.*;

class chainMultiplication {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(in.readLine());
            String input_line[] = in.readLine().trim().split("\\s+");
            int arr[] = new int[N];
            for (int i = 0; i < N; i++)
                arr[i] = Integer.parseInt(input_line[i]);

            Solution ob = new Solution();
            System.out.println(ob.matrixMultiplication(N, arr));
        }
    }
}

class Solution {
    static int f(int i, int j, int arr[], int dp[][]) {
        if (i == j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int min = (int) 1e9;
        for (int k = i; k < j; k++) {

            int steps = (arr[i - 1] * arr[k] * arr[j]) + f(i, k, arr, dp) + f(k + 1, j, arr, dp);
            min = Math.min(min, steps);

        }
        return dp[i][j] = min;
    }

    public int matrixMultiplication(int N, int arr[]) {
        int dp[][] = new int[N][N];
        for (int a[] : dp) {
            Arrays.fill(a, -1);
        }
        return f(1, N - 1, arr, dp);
    }
}
```