# Java Collection | Set 1 (ArrayList) Part-2
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Implement different operations on a ArrayList `A`.

**Input:**

The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of five types
1. a x (Adds an element x to the ArrayList A at the end )
2. b (Sorts the ArrayList A in ascending order )
3. c (Reverses the ArrayList A)
4. d (prints the size of the ArrayList)
5. e (prints space separated values of the ArrayList)
5. f  (Sorts the ArrayList A in descending order)

**Output:**

The output for each test case will  be space separated integers denoting the results of each query .

__Example:__
```
Input
2
6
a 4 a 6 a 7 b c e
4
a 55 a 11 d e
 
Output
7 6 4
2 55 11

Explanation :
For the first test case
There are six queries. Queries are performed in this order
1. a 4 { ArrayList has 4  }
2. a 7 {ArrayList has 7 }
3. a 6 {ArrayList has 6}
4. b {sorts the ArrayList in ascending order, ArrayList now is 5 6 7}
5. c {reverse the ArrayList}
6. e {prints the element of the ArrayList 7 6 4}
```

__Constraints:__
- 1 <= T <= 100
- 1 <= Q <= 100

### Solution
```java
import java.util.*;

class ArrayList_Collection {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            ArrayList<Integer> A = new ArrayList<Integer>();
            int q = sc.nextInt();

            while (q > 0) {
                char c = sc.next().charAt(0);
                GfG g = new GfG();
                if (c == 'a') {
                    int x = sc.nextInt();
                    g.add_to_ArrayList(A, x);
                }

                if (c == 'b')
                    g.sort_ArrayList_Asc(A);

                if (c == 'c')
                    g.reverse_ArrayList(A);

                if (c == 'd')
                    System.out.print(g.size_Of_ArrayList(A) + " ");

                if (c == 'e')
                    g.print_ArrayList(A);

                if (c == 'f')
                    g.sort_ArrayList_Desc(A);

                q--;
            }
            T--;
            System.out.println();
        }
        sc.close();
    }
}

class GfG {
    /*
     * inserts an element x at
     * the back of the ArrayList A
     */
    void add_to_ArrayList(ArrayList<Integer> A, int x) {
        A.add(x);
    }

    /* sort the ArrayList A in ascending order */
    void sort_ArrayList_Asc(ArrayList<Integer> A) {
        Collections.sort(A);
    }

    /* reverses the ArrayList A */
    void reverse_ArrayList(ArrayList<Integer> A) {
        Collections.reverse(A);
    }

    /* returns the size of the ArrayList A */
    int size_Of_ArrayList(ArrayList<Integer> A) {
        return A.size();
    }

    /* sorts the ArrayList A in descending order */
    void sort_ArrayList_Desc(ArrayList<Integer> A) {
        Collections.sort(A, Collections.reverseOrder());
    }

    /*
     * prints space separated
     * elements of ArrayList A
     */
    void print_ArrayList(ArrayList<Integer> A) {
        for (int i = 0; i < A.size(); i++) {
            System.out.print(A.get(i) + " ");
        }
    }
}
```