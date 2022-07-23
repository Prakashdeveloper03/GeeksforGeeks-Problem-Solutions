# Java Collection | Set 1 (ArrayList) Part-1
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

ArrayList are dynamic size arrays. Try this problem using ArrayList.

Given a ArrayList of `N` elements and a integer `Q` defining the type of query(which will be either 1 or 2) :
Q = 1 includes two integers p and r. Which means insert the value r at index p in the ArrayList and print the whole updated ArrayList.
Q = 2 includes one integer p. In this query print the index at which the value p is last found in the ArrayList. If the value p is not found in the ArrayList then print "-1".

__Example 1:__
```
Input:
N = 5, Q = 1
A[] = {1, 4, 5, 9, 3}
Query[] = {2, 6}
Output:
1 4 6 5 9 3
Explanation:
p=Query[0]=2
r=Query[1]=6
After inserting the element
r=6 at index p=2 ,the updated
arraylist ={1,4,6,5,9,3}
```
__Example 2:__
```
Input:
N = 4 , Q = 2
A[]= {1, 9, 2, 4}
Query[]= {4}
Output:
3
Explanation:
p = 4
The element 4 is last found
in A at index = 3
```
__Your Task__

You don't need to read input or print anything. Your task is to complete the function **solve()** which takes the N (number of elements in Array A) ,ArrayList A, Q(Type of the of query) and the ArrayList Query. If the Q = 1 then return the updated ArrayList of integers. else return the ArrayList which contains the index at which the value p is last found in the ArrayList A (where p = Query[0] ) ,If the value of p is not found then return the ArrayList which contains -1.

**Expected Time Complexity:** O(N)

**Expected Auxiliary Space:** O(N)

__Constraints:__
- 1 <= N <= 10<sup>4</sup>
- 1 <= Q <= 2

### Solution
```java
import java.io.*;
import java.util.*;

class Solution {
    ArrayList<Integer> solve(int N, ArrayList<Integer> A, int Q, ArrayList<Integer> Query) {
        ArrayList<Integer> res = new ArrayList<>();
        if (Q == 1) {
            int p = Query.get(0);
            int r = Query.get(1);
            A.add(p, r);
            return A;
        } else
            res.add(A.lastIndexOf(Query.get(0)));
        return res;
    }
}

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int q = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                a.add(sc.nextInt());
            }
            ArrayList<Integer> query = new ArrayList<Integer>();
            if (q == 1) {
                query.add(sc.nextInt());
                query.add(sc.nextInt());
            } else {
                query.add(sc.nextInt());
            }
            Solution obj = new Solution();
            ArrayList<Integer> ans = obj.solve(n, a, q, query);
            for (int i = 0; i < ans.size(); i++) {
                System.out.print(ans.get(i));
                if (q == 1)
                    System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
```