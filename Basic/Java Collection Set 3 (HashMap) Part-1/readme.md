# Java Collection | Set 3 (HashMap) Part-1
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

HashMap is a part of collection in Java. It provides the basic implementation of Map interface of Java. It stores the data in (Key, Value) pairs. To access a value you must know its key, otherwise, you can’t access it. HashMap is known as HashMap because it uses the technique called Hashing. Solve the following problem using a HashMap.

Given two arrays `key[]` and `arr[]` of size `N` and a key `s`. Each key[i] and arr[i] form a key-value pair. Find if the value of S in the N key-value pairs.

__Example 1:__
```
Input: n = 3
keys = {sak, varun, vijay}
arr = {5, 7, 3}
s = sak
Output: 5
Explaination: The key is present in the map.
So its corresponding value is returned which
is 5.
```
__Example 2:__
```
Input: n = 4
keys = {csdb, dsh, askj, adfs}
arr = {4, 5, 8, 9}
s = dptu
Output: -1
Explaination:
The key is not present in the map.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **map()** which takes n, keys[], arr[] and s as input parameters and returns the value associated with the key s. If the key is not present return -1.

__Expected Time Complexity:__ O(n)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ n, |length of key|, value ≤ 1000

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
            String keys[] = new String[n];
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                keys[i] = a[2 * i];
                arr[i] = Integer.parseInt(a[2 * i + 1]);
            }
            String s = in.readLine();

            Solution ob = new Solution();
            System.out.println(ob.map(n, keys, arr, s));
        }
    }
}

class Solution {
    int map(int n, String keys[], int arr[], String s) {
        HashMap<String, Integer> hm = new HashMap<>();
        for (int i = 0; i < n; i++) {
            hm.put(keys[i], arr[i]);
        }

        if (hm.containsKey(s))
            return hm.get(s);
        else
            return -1;
    }
}
```