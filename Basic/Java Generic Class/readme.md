# Java Generic Class
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Generic Class in java  is a feature. We write code once and use it for any data type including user defined data types. Given an integer or a string as an input. Print the type of input and the given value as output.

**Input:**

The first line will contain an integer T (number of test cases). First line of each test case will contain one integer c. Next line will contain a string if c is equal to 1 or will contain a integer if c is equal to 2.

**Output:**

Print the type of the given data and the given value in new line.

**Constraints:**
- 1 < = T < = 100
- 1 < = c < = 2
- 1 <= Length of strings, integers <= 10<sup>3</sup>

**Example:**
```
Input:
2
1
gfg
2
5

Output:
String
gfg
Integer
5
```

### Solution
```java
import java.util.Scanner;

class gfg {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            if (n == 1) {
                String s = sc.next();
                GenericClass<String> Str = new GenericClass<String>(s);
                Str.showType();
            } else {
                Integer p = sc.nextInt();
                GenericClass<Integer> integer = new GenericClass<Integer>(p);
                integer.showType();
            }
        }
        sc.close();
    }
}

class GenericClass<T> {
    private T res;

    GenericClass(T res) {
        this.res = res;
    }

    void showType() {
        System.out.println(res.getClass().getSimpleName());
        System.out.println(res);
    }
}
```