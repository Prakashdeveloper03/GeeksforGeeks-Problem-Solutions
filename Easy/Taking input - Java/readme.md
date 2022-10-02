# Taking input - Java
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Before implementing any algorithm, we should be thorough with taking inputs. Here, we will learn how to read inputs.
You are given five inputs: a(integer), b(float ), c(long), d(byte), s(string) respectively. You need to take the input and print a, b, c, d and s in new line.

__Example 1:__
```
Input:
5
2.5
6546854
120
geek for geeks

Output:
5
2.5
6546854
120
geek for geeks
```
__Example 2:__
```
Input:
6
3.5
7546854
220
suryansh is Legendary

Output:
6
3.5
7546854
220
suryansh is Legendary
```
__Your Task__

Your task is to complete the provided function **IOFunction()**.

__Constraints:__
- 1 <= a <= 10<sup>6</sup>

### Solution
```java
import java.util.Scanner;

class Geeks {
    public void IOFunction() {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            System.out.println(sc.nextInt());
            System.out.println(sc.nextFloat());
            System.out.println(sc.nextLong());
            System.out.println(sc.nextByte());
            sc.nextLine();
            System.out.println(sc.nextLine());
        }
        sc.close();
    }
}

public class Input {
    public static void main(String[] args) {
        Geeks g = new Geeks();
        g.IOFunction();
    }
}
```