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