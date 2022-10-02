# Start Coding - Java
![made-with-Java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

When learning a new language, we first learn to output some message. Here, we'll start with the famous Hello World message. Now, here you are given a function to complete. Don't worry about the ins and outs of functions, just add the command (System.out.print("Hello World")) to print **Hello World**.

__Example 1:__
```
Input:
No input

Output:
Hello World

Explanation:
Hello World is printed.
```
__Your Task__

Your task is to complete the function below to print hello world.

### Solution
```java
class Geeks {
    public void printHello() {
        System.out.println("Hello World");
    }
}

class Start {
    public static void main(String args[]) {
        Geeks g = new Geeks();
        g.printHello();
    }
}
```