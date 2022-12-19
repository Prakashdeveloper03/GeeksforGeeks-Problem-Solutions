# Two Repeated Elements
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

__Example 1:__
```
Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array,
1 and 3 are repeated two times.
```

__Example 2:__
```
Input:
N = 2
array[] = {1,2,2,1}
Output: 2 1
Explanation: In the given array,
1 and 2 are repeated two times
and second occurence of 2 comes
before 1. So the output is 2 1.
```

**Your Task:**

The task is to complete the function **repeatedElements()** which takes array arr[] and an integer N as inputs (the size of the array is N + 2 and elements are in range[1, N]) and finds the two repeated element in the array and return them in a list.

**Note:** Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X,Y).

**Expected Time Complexity**: O(n)

**Expected Auxiliary Space**: O(1)

__Constraints:__
- 2 ≤ n ≤ 10<sup>5<sup>
- 1 ≤ array[i] ≤ N

### Solution
```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            String l = br.readLine();
            String[] sarr = l.split(" ");
            int[] arr = new int[sarr.length];
            for (int i1 = 0; i1 < arr.length; i1++) {
                arr[i1] = Integer.parseInt(sarr[i1]);
            }
            Solution obj = new Solution();
            int[] res = obj.twoRepeated(arr, n);
            System.out.println(res[0] + " " + res[1]);
        }
    }
}

class Solution {
    public int[] twoRepeated(int arr[], int N) {
        int ans[] = new int[2];
        int idx = 0;
        for (int i = 0; i < N + 2; i++) {
            arr[arr[i] % (N + 1)] += N + 1;
            if (arr[arr[i] % (N + 1)] / (N + 1) == 2) {
                ans[idx] = arr[i] % (N + 1);
                idx++;
            }
        }
        return ans;
    }
}
```