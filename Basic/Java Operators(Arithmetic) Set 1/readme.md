# Java Operators(Arithmetic) | Set 1
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given three numbers A,B and C. Find roots of quadratic equation Ax<sup>2</sup> + Bx + C = 0. (A not equal to  0)

__Example 1:__
```
Input: A = 2, B = 3, C = 2
Output: -2.366025, -0.633975
Explanation: Roots of the equation
2x2 + 3x + 2 = 0 are -2.366025 and -0.633975.
```
__Example 2:__
```
Input: A = 2, B = 3, C = 4
Output: -1
Explanation: Roots of 2x2 + 3x + 4 = 0
are not real.
```
__Your Task__

You don't need to read or print anyhting. Your task is to complete the function **FindRoots()** which takes A, B and C as input parameters and returns a list of roots of the given equation in ascending order. If roots are not real numbers then return a list containing -1.

__Expected Time Complexity:__ O(1)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- -100 <= A, B, C <= 100

### Solution
```java
import java.io.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            String[] S1 = br.readLine().trim().split(" ");
            int A = Integer.parseInt(S1[0]);
            int B = Integer.parseInt(S1[1]);
            int C = Integer.parseInt(S1[2]);
            Solution ob = new Solution();
            double[] ans = ob.FindRoots(A, B, C);
            if (ans.length == 1) {
                System.out.println((int) ans[0]);
                continue;
            }
            for (int i = 0; i < ans.length; i++)
                System.out.print(String.format("%6f", ans[i]) + " ");
            System.out.println();
        }
    }
}

class Solution {
    public double[] FindRoots(int A, int B, int C) {
        double root_det = B * B - 4 * A * C;
        if (root_det < 0)
            return new double[] { -1.0 };
        root_det = Math.sqrt(root_det);
        double r2 = (-B + root_det) / (2 * A);
        double r1 = (-B - root_det) / (2 * A);
        if (r2 > r1) {
            double temp = r2;
            r2 = r1;
            r1 = temp;
        }
        return new double[] { r2, r1 };
    }
}
```