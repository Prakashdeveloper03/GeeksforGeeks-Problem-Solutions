# The New Line
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

You are familiar with producing output using C++/C. In this task, you'll be required to write three messages in three separate lines. Write Geeks for Geeks. But wait a minute!! You need to write each word of it in a separate line.

__Example 1:__
```
Input:No Input
Output:
Geeks
for
Geeks
Explanation: First word of the statment
is in first line, next word is in next
line, and last is in last line.
```
__Your Task__

In the function printInNewLine(), output each word of Geeks for Geeks in a separate line.

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

void printNewLine()
{

    cout << "Geeks" << endl
         << "for" << endl
         << "Geeks";
}

int main()
{
    printNewLine();
    return 0;
}
```