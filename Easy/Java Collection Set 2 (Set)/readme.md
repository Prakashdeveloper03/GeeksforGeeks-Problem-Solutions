# Java Collection | Set 2 (Set)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement different operations on a set s .

**Input:**

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types
1. a x (inserts an element x to the set s)
2. b (prints the contents of the set s in increasing order)
3. c x (erases an element x from the set s)
4. d x (prints 1 if the element x is present in the set else print -1)
5. e (prints the size of the set s)

**Output:**

The output for each test case will  be space separated integers denoting the results of each query .

__Example 1:__
```
Input:
2
6
a 1 a 2 a 3 b c 2 b
5
a 1 a 5 e d 5 d 2

Output:
1 2 3 1 3
2 1 -1

Explanation :
Testcase 1:
There are six queries. Queries are performed in this order
1. a 1     { insert 1 to set now set has {1} }
2. a 2     {inserts 2 to set now set has {1,2} }
3. a 3     {inserts 3 to set now set has {1,2,3} }
4. b        {prints the set contents ie 1,2,3}
5. c 2     {removes 2 from the set }
6. b        {prints the set contents ie 1,3}

Testcase 2:
There are five queries. Queries are performed in this order
1. a 1     {inserts 1 to set now set has {1}}
2. a 11   {inserts 11 to set now set has {1,11}}
3. e        {prints the size of the set ie 2}
4. d 5     {since five is present prints 1}
5. d 2     {since 2 is not present in the set prints -1}
```

__Constraints:__
- 1 <= T <= 100
- 1 <= Q <= 100

### Solution
```java
import java.util.*;

class Collections_Set_1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            Set<Integer> s = new HashSet<Integer>();
            int q = sc.nextInt();

            while (q > 0) {
                GfG g = new GfG();
                char c = sc.next().charAt(0);
                if (c == 'a') {
                    int x = sc.nextInt();
                    g.insert(s, x);
                }
                if (c == 'b') {
                    g.print_contents(s);
                }
                if (c == 'c') {
                    int x = sc.nextInt();
                    g.erase(s, x);
                }
                if (c == 'd') {
                    int x = sc.nextInt();
                    System.out.print(g.find(s, x) + " ");
                }
                if (c == 'e')
                    System.out.print(g.size(s) + " ");
                q--;
            }
            t--;
            System.out.println();
        }
        sc.close();
    }
}

class GfG {
    /* inserts an element x to the set s */
    void insert(Set<Integer> s, int x) {
        s.add(x);
    }

    /* prints the contents of the set s in ascending order */
    void print_contents(Set<Integer> s) {
        List<Integer> sl = new ArrayList<Integer>();
        for (int i : s) {
            sl.add(i);
        }
        Collections.sort(sl);
        for (int i : sl) {
            System.out.print(i + " ");
        }
    }

    /* erases an element x from the set s */
    void erase(Set<Integer> s, int x) {
        s.remove(x);
    }

    /* returns the size of the set s */
    int size(Set<Integer> s) {
        return s.size();
    }

    /*
     * returns 1 if the element x is
     * present in set s else returns -1
     */
    int find(Set<Integer> s, int x) {
        if (s.contains(x)) {
            return 1;
        }
        return -1;
    }
}
```