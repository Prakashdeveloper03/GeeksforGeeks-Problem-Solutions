# Circular tour
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Suppose there is a circle. There are `N` petrol pumps on that circle. You will be given two sets of data.
    1. The amount of petrol that every petrol pump has.
    2. Distance from that petrol pump to the next petrol pump.
Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.

**Note:**  Assume for 1 litre petrol, the truck can go 1 unit of distance.

__Example 1:__
```
Input:
N = 4
Petrol = 4 6 7 4
Distance = 6 5 3 5
Output: 1
Explanation: There are 4 petrol pumps with
amount of petrol and distance to next
petrol pump value pairs as {4, 6}, {6, 5},
{7, 3} and {4, 5}. The first point from
where truck can make a circular tour is
2nd petrol pump. Output in this case is 1
(index of 2nd petrol pump).
```
__Your Task__

Your task is to complete the function **tour()** which takes the required data as inputs and returns an integer denoting a point from where a truck will be able to complete the circle (The truck will stop at each petrol pump and it has infinite capacity). If there exists multiple such starting points, then the function must return the first one out of those. (return -1 otherwise)

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 2 ≤ N ≤ 10000
- 1 ≤ petrol, distance ≤ 1000

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution
{
public:
    int tour(petrolPump p[], int n)
    {
        int totalPetrol = 0, totalDistance = 0;
        for (int i = 0; i < n; i++)
        {
            totalPetrol += p[i].petrol;
            totalDistance += p[i].distance;
        }
        if (totalDistance > totalPetrol)
            return -1;
        int candidate = 0, currPetrol = 0, currDist = 0;
        for (int i = 0; i < n; i++)
        {
            currPetrol += p[i].petrol;
            currDist += p[i].distance;
            if (currDist > currPetrol)
            {
                currDist = 0;
                currPetrol = 0;
                candidate = i + 1;
            }
        }
        return candidate;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;
        petrolPump p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].distance >> p[i].petrol;
        }
        cout << obj.tour(p, n) << endl;
    }
    return 0;
}
```