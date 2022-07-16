# Data Types - Java
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Working with Data Types is very important in programming world. Here, we will learn to manipulate the basic data types in Java. You will be given four different variables of different data types: a (int), b (float), c (double), l (long), d (byte). Your task is to do step-wise operations as given below:
1. Divide c by b.
2. Divide b by a.
3. Divide c by a.
4. Add result at step 3 with l.
5. Divide a by d.

__Example 1:__
```
Input:
1 2 3 5 127

Output:
1.5 2.0 3.0 8.0 0

Exaplanation:
a=1, b=2, c=3, l=5, d=127
c/b=1.5
b/a=2.0
c/a=3.0
(c/a)+l=8.0
a/d=0
```
__Example 2:__
```
Input:
2 4 8 16 32

Output:
2.0 2.0 4.0 20.0 0

Exaplanation:
a=2, b=4, c=8, l=16, d=32
c/b=2.0
b/a=2.0
c/a=4.0
(c/a)+l=2.0
a/d=0
```
__Your Task__

Your task is to complete the provided function **dataTypes()** following the above given steps.

__Constraints:__
- 1 <= a, b, c <= 10<sup>6</sup>
- 1 <= d <= 127
- 1 <= l <= 10<sup>18</sup>

### Solution
```java
import java.util.Scanner;

class Geeks {
    public void dataTypes(int a, float b, double c, long l, byte d) {
        double p = c / b;
        double q = b / a;
        double r = c / a;
        double m = r + l;
        int s = a / d;
        System.out.println(p + " " + q + " " + r + " " + m + " " + s);
    }
}

class GFG {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        float b;
        double c;
        long l;
        byte d;
        int t = sc.nextInt();
        while (t-- > 0) {
            a = sc.nextInt();
            b = sc.nextFloat();
            c = sc.nextDouble();
            l = sc.nextLong();
            d = sc.nextByte();
            Geeks g = new Geeks();
            g.dataTypes(a, b, c, l, d);
        }
        sc.close();
    }
}
```