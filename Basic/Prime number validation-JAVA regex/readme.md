# Prime number validation-JAVA regex
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Check the given number is prime or not using JAVA regex.

__Example 1:__
```
Input: N = 5
Output: 1
Explanation: 5 is prime number.
```
__Example 2:__
```
Input: N = 10
Output: 0
Explanation: 10 is not prime number.
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **solve()** which takes the N (number of elements in Array A) ,ArrayList A, Q(Type of the of query) and the ArrayList Query. If the Q = 1 then return the updated ArrayList of integers. else return the ArrayList which contains the index at which the value p is last found in the ArrayList A (where p = Query[0] ) ,If the value of p is not found then return the ArrayList which contains -1.

**Expected Time Complexity:** O(N / 2)

**Expected Auxiliary Space:** O(1)

__Constraints:__
- 1 <= N <= 10000

### Solution
```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while (T-- > 0) {
            int N = Integer.parseInt(br.readLine().trim());
            Solution ob = new Solution();
            int ans = ob.isPrime(N);
            System.out.println(ans);
        }
    }
}

class Solution {
    public int isPrime(int N) {
        if (N == 0 || N == 1) {
            return 0;
        }
        for (int i = 2; i <= Math.sqrt(N); i++) {
            if (N % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
```