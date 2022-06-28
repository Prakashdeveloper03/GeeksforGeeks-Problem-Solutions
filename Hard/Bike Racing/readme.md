# Bike Racing
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Geek is organising a bike race with N bikers. The initial speed of the ith biker is denoted by H<sub>i</sub> Km/hr and the acceleration of ith biker as A<sub>i</sub> Km/Hr2. A biker whose speed is 'L' or more, is considered be a fast biker. The total speed on the track for every hour is calculated by adding the speed of each fast biker in that hour. When the total speed on the track is 'M' kilometers per hour or more, the safety alarm turns on. Find **the minimum number of hours** after which the safety alarm will start.

__Example 1:__
```
Input:
N = 3, M = 400, L = 120
H = {20, 50, 20}
A = {20, 70, 90}
Output: 3
Explaination:
Speeds of all the Bikers at ith hour
Biker1= [20  40  60  80 100]
Biker2= [50 120 190 260 330]
Biker3= [20 110 200 290 380]

Initial Speed on track  = 0
because none of the biker's speed is fast enough.
Speed on track after 1st Hour= 120
Speed on track after 2nd Hour= 190+200=390
Speed on track after 3rd Hour= 260+290=550
Alarm will start at 3rd Hour.
```
__Example 2:__
```
Input:
N = 2, M = 60, L = 120
H = {50, 30}
A = {20, 40}
Output: 3
Explaination:
Speeds of all the Bikers at ith hour
Biker1= [50 70  90 110 130]
Biker2= [30 70 110 150 190]

Initial Speed on track = 0 because none of the
biker's speed is fast enough.
Speed on track at 1st Hour= 0
Speed on track at 2nd Hour= 0
Speed on track at 3rd Hour= 150
Alarm will buzz at 3rd Hour.
```
__Your Task__

You do not need to read input or print anything. Your task is to complete the function **buzzTime()** which takes `N`, `M`, `L` and array `H` and array `A` as input parameters and returns the time when alarm buzzes.

__Expected Time Complexity:__ O(N * log(max(L,M)))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 ≤ N ≤ 10<sup>5</sup>
- 1 ≤ L, M ≤ 10<sup>10</sup>
- 1 ≤ H<sub>i</sub>, A<sub>i</sub> ≤ 10<sup>9</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long low = 0;
        long high = 1e9;
        while (low <= high)
        {
            long mid = (high - low) / 2 + low;
            long total = 0, count = 0;

            for (int itr = 0; itr < N; itr++)
            {
                count = H[itr] + A[itr] * mid;
                if (count >= L)
                    total += count;
            }

            if (total >= M)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long N, M, L;
        cin >> N >> M >> L;
        long H[N], A[N];
        for (long i = 0; i < N; i++)
            cin >> H[i] >> A[i];
        Solution obj;
        cout << obj.buzzTime(N, M, L, H, A) << endl;
    }
    return 0;
}
```

