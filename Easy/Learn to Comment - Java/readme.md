# Learn to Comment - Java
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Comments are very useful in any language to tell user what is the task of any function or operation. The comments are neglected by the compiler, so whatever you write in the comments won't have any effect on the working of a code. In Java, comments can be written as mentioned below:
```
/*This is a comment*/
//This is also a comment
```
You are given a complete function that outputs a, b, and c. Comment the code that outputs b, so only a and c gets printed.

__Example 1:__
```
Input:
a = 5, b = 6, c = 15
Output:
5
15
```
__Example 2:__
```
Input:
a = 5, b = 8, c = 15
Output:
5
15
```
__Your Task__

Your task is to comment the unnecessary statement.

__Constraints:__
- 1 <= a <= 10<sup>6</sup>
- 1 <= b <= 10<sup>6</sup>
- 1 <= c <= 10<sup>6</sup>

### Solution
```java
import java.util.Scanner;

class Geeks {
    public void comment(int a, int b, int c) {
        System.out.println(a);
        // System.out.println(b);
        System.out.println(c);
    }
}

class Comment {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        while (testcase-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            Geeks g = new Geeks();
            g.comment(a, b, c);
        }
        sc.close();
    }
}
```