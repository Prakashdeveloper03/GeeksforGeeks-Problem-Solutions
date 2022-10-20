# Java Collection | Set 5 (LinkedHash Set)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement different operations on a **LinkedHashset** s .

**Input:**

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types
1. a x (inserts an element x to the LinkedHashSet s)
2. b (prints the contents of the LinkedHashSet s in increasing order)
3. c x (erases an element x from the LinkedHashSet s)
4. d x (prints 1 if the element x is present in the LinkedHashSet else print -1)
5. e (prints the size of the LinkedHashSet s)
6. f (prints the contents of the LinkedHashSet s in insertion order)

**Output:**

The output for each test case will  be space separated integers denoting the results of each query .

**Constraints:**
- 1 <= T <= 100
- 1 <= Q <= 100

**Example:**
```
Input
2
7
a 1 a 2 a 3 b c 2 b f
10
a 5 a 4 a 3 a 2 a 1 b c 1 c 3 b f
 
Output
1 2 3 1 3 1 3
1 2 3 4 5 2 4 5 5 4 2
```

### Solution
```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Scanner;

class Collections_Set_5 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            LinkedHashSet<Integer> s = new LinkedHashSet<Integer>();
            int q = sc.nextInt();

            while (q > 0) {
                GfG g = new GfG();
                char c = sc.next().charAt(0);
                if (c == 'a') {
                    int x = sc.nextInt();
                    g.insert(s, x);
                }
                if (c == 'b') {
                    g.print_Contents_Increasing_Order(s);
                }
                if (c == 'c') {
                    int x = sc.nextInt();
                    g.erase(s, x);
                }
                if (c == 'd') {
                    int x = sc.nextInt();
                    System.out.print(g.find(s, x) + " ");
                }
                if (c == 'e') {
                    System.out.print(g.size(s) + " ");
                }
                if (c == 'f') {
                    g.print_Contents_Insertion_Order(s);
                }
                q--;
            }
            t--;
            System.out.println();
        }
        sc.close();
    }
}

class GfG {
    void insert(LinkedHashSet<Integer> s, int x) {
        s.add(x);
    }

    void print_Contents_Increasing_Order(LinkedHashSet<Integer> s) {
        ArrayList<Integer> list = new ArrayList<Integer>(s);
        Collections.sort(list);
        for (Integer i : list)
            System.out.print(i + " ");
    }

    void print_Contents_Insertion_Order(LinkedHashSet<Integer> s) {
        Iterator it = s.iterator();
        while (it.hasNext())
            System.out.print(it.next() + " ");
    }

    void erase(LinkedHashSet<Integer> s, int x) {
        s.remove(x);
    }

    int size(LinkedHashSet<Integer> s) {
        return s.size();
    }

    int find(LinkedHashSet<Integer> s, int x) {
        if (s.contains(x))
            return 1;
        else
            return -1;
    }
}
```