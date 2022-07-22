# Max sum in the configuration
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array(0-based indexing), you have to find the max sum of i*A[i] where A[i] is the element at index i in the array. The only operation allowed is to rotate(clock-wise or counter clock-wise) the array any number of times.

**Note:**  Assume for 1 litre petrol, the truck can go 1 unit of distance.

__Example:__
```
Input:
N = 4
A[] = {8,3,1,2}
Output: 29
Explanation: Above the configuration
possible by rotating elements are
3 1 2 8 here sum is 3*0+1*1+2*2+8*3 = 29
1 2 8 3 here sum is 1*0+2*1+8*2+3*3 = 27
2 8 3 1 here sum is 2*0+8*1+3*2+1*3 = 17
8 3 1 2 here sum is 8*0+3*1+1*2+2*3 = 11
Here the max sum is 29
```
__Your Task__

Your task is to complete the function **max_sum()** which takes two arguments which is the array A[] and its size and returns an integer value denoting the required max sum.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>4</sup>
- 1 <= A[] < 1000

### Solution
```java
import java.util.*;

class Maxsum {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = sc.nextInt();

            System.out.println(new GfG().max_sum(arr, n));
            t--;
        }
        sc.close();
    }
}

class GfG {
    int max_sum(int A[], int N) {
        int sum = 0, prev = 0;
        int i;
        for (i = 0; i < N; i++) {
            sum += A[i];
            prev += (A[i] * i);
        }

        int mx = prev;
        for (i = 1; i < N; i++) {
            prev = prev - sum + A[i - 1] + A[i - 1] * (N - 1);
            mx = Math.max(mx, prev);
        }
        return mx;
    }
}
```