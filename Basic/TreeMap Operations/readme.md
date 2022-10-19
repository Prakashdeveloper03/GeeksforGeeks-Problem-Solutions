# TreeMap Operations
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement different operations on Treemap. Operations will be performed by different types of queries.
A query can be of four types:
1. a x y (adds an entry with key x and value y to the Treemap)
2. b x (print value of  x if present in the Treemap else print -1. )
3. c (prints the size of the Treemap)
4. d x ( removes an entry with key x from the map )
5. e (print map sorted by key)

__Example 1:__
```
Input:
6
a 1 2 a 66 3 b 66 d 1 c e

Output:
3 1 66

Explanation:
There are five queries. Queries are performed in this order
1. a 1 2    --->  map has a key 1 with value 2
2. a 66 3   ---> map has a key 66 with value 3
3. b 66     ---> prints the value of key 66 if its present in the map ie 3.
4. d 1      ---> removes an entry from map with key 1
5. c        ---> prints the size of the map ie 1
6. e        ---> prints the map sorted by key
```
__Example 2:__
```
Input:
4
a 1 66 b 5 c e

Output:
-1 1 1

Explanation:
There are three queries. Queries are performed in this order
1. a 1 66   ---> adds a key 1 with a value of 66 in the map
2. b 5      --->  since the key 5 is not present in the map hence -1 is printed.
3. c        ---> prints the size of the map ie 1
4. e        ---> prints the map sorted by key
```
__Your Task__

You are required to complete the following functions:
- **add_Value** : Takes HashMap, x, y as arguments and maps x as key and y as its value. Does not return anything.
- **find_value** : Takes HashMap and x as arguments. If HM contains x key then return the value, else return -1.
- **getSize** : Takes HashMap as argument and just returns its size.
- **removeKey** : Takes HashMap and x as arguments and removes x if it exists. Does not return anything.
- **sorted_By_Key** : Takes HashMap as argument and prints the keys that are sorted. Don't print newline.

__Constraints:__
- 1 <= Q <= 100

### Solution
```java
import java.util.Scanner;
import java.util.TreeMap;

class HashMap_Set4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            TreeMap<Integer, Integer> hm = new TreeMap<Integer, Integer>();
            int q = sc.nextInt();
            while (q > 0) {
                GfG g = new GfG();
                char c = sc.next().charAt(0);
                if (c == 'a') {
                    int x = sc.nextInt();
                    int y = sc.nextInt();
                    g.add_Value(hm, x, y);
                }
                if (c == 'b') {
                    int y = sc.nextInt();
                    System.out.print(g.find_value(hm, y) + " ");
                }
                if (c == 'c')
                    System.out.print(g.getSize(hm) + " ");
                if (c == 'd') {
                    int x = sc.nextInt();
                    g.removeKey(hm, x);
                }
                if (c == 'e')
                    g.sorted_By_Key(hm);
                q--;
            }
            System.out.println();
            t--;
        }
        sc.close();
    }

}

class GfG {
    /* Inserts an entry with key x and value y in map */
    void add_Value(TreeMap<Integer, Integer> hm, int x, int y) {
        hm.put(x, y);
    }

    /* Returns the value with key x from the map */
    int find_value(TreeMap<Integer, Integer> hm, int x) {
        if (hm.containsKey(x))
            return hm.get(x);
        else
            return -1;
    }

    /* Returns the size of the map */
    int getSize(TreeMap<Integer, Integer> hm) {
        return hm.size();
    }

    /* Removes the entry with key x from the map */
    void removeKey(TreeMap<Integer, Integer> hm, int x) {
        hm.remove(x);
    }

    /* print map sorted by key */
    void sorted_By_Key(TreeMap<Integer, Integer> hm) {
        for (Integer treeKey : hm.keySet())
            System.out.print(treeKey + " ");
    }
}
```