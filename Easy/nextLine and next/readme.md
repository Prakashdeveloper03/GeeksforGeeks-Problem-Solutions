# nextLine and next
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Here, we will learn how  to take input of a string that comprises of multiple words. Also, we will learn to clear the input buffer. Your task is to take input of strings and integers and produce the output. We must be clear with **next() and nextLine()**

**Note:** Refer the following link to get better understanding: StackOverflow

**Input Format:**

First line of input contains T,  number of testcases. For each testcase, there will be two lines of input. First line contains integer, second line contains string.

**Output Format:**

For each testcase, print the variables in same order as taken in input.

**User Task:**

Your task is to complete the function getInput() to take input of strings and learn how to correctly take input.

__Example:__
```
Input:
1
5
Geeks For Geeks

Output:
5
Geeks For Geeks
```

### Solution
```java
import java.util.*;

class NextLine {
    public static void main(String[] args) {
        Geeks g = new Geeks();
        g.getInput();
    }
}

class Geeks {
    public void getInput() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int a = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            System.out.println(a);
            System.out.println(s);
        }
        sc.close();
    }
}
```