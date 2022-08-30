# C++ Hello World
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Let's begin your journey towards coding with the very first question of coding world. Your task is to write code which prints Hello World.

__Example 1:__
```
Input:
No Input
Output:
Hello World
```

__Your Task__

In the function helloWorld(), output a line "Hello World" (without quotes).

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helloWorld()
    {
        cout << "Hello World" << endl;
    }
};

int main()
{
    Solution obj;
    obj.helloWorld();
    return 0;
}
```