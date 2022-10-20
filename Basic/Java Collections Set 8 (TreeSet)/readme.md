# Java Collections | Set 8 (TreeSet)
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given `n` strings added in a TreeSet and four characters a,b,c,d. Firstly print all the strings which are less than a, then print all the strings which are greater than or equal to b. In the end print all the strings which are greater than or equal to c and less than d i.e between c and d ( excluding d ).

**Input:**

The first line of input is T denoting the number of testcases. First line consists of an integer n. Next line contains n spaced strings. Last line of each test case consists of 4 space separated characters.

**Output:**

For each test case output will be in three lines:
First Line :  Print all the strings which are less than a (char variable).
Second Line : Print all the strings which are greater than or equal to b (char variable).
Third Line :  Print all the strings which are greater than or equal to c and less than d i.e between c and d ( excluding d ).

**Constraints:**
- 1 <= T <= 100
- 1 <= N <= 100
- 1 <= Length of string <= 100

**Example:**
```
Input:
1
3
sa ka da
s k c s

Output:
[da, ka]
[ka, sa]
[da, ka]
```

### Solution
```java
import java.util.Scanner;
import java.util.TreeSet;

class gfg {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            TreeSet<String> ts = new TreeSet<>();
            int n = sc.nextInt();
            ;
            for (int i = 0; i < n; i++) {
                String s = sc.next();
                ts.add(s);
            }
            char a = sc.next().charAt(0);
            char b = sc.next().charAt(0);
            char c = sc.next().charAt(0);
            char d = sc.next().charAt(0);
            gfg1 obj = new gfg1();
            obj.task(ts, a, b, c, d);
        }
        sc.close();
    }
}

class gfg1 {
    void task(TreeSet<String> ts, char a, char b, char c, char d) {
        System.out.println(ts.headSet(a + ""));
        System.out.println(ts.tailSet(b + ""));
        System.out.println(ts.subSet(c + "", d + ""));
    }
}
```