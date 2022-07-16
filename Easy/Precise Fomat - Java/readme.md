# Precise Format - Java
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after decimal point.

**Note:** You may use System.out.format()

__Example 1:__
```
Input:
5.43 2.653

Output:
2.046739 2.047
```
__Example 2:__
```
Input:
3.25 2.5

Output:
1.3 1.300
```
__Your Task__

Your task is to complete the provided function **printInFormat()**.
Note: You don't need to give a new line character after using System.out.format().

__Constraints:__
- 1 <= a, b,<= 100

### Solution
```java
import java.util.*;

class Geeks {
    public void printInFormat(float a, float b) {
        float result = a / b;
        System.out.format(result + " " + "%.3f", result);
    }
}

class Format {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testcases = sc.nextInt();
        while (testcases-- > 0) {
            float a = sc.nextFloat();
            float b = sc.nextFloat();
            Geeks g = new Geeks();
            g.printInFormat(a, b);
            System.out.println();
        }
        sc.close();
    }
}
```