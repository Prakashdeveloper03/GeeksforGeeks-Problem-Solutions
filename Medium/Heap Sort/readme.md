# Heap Sort
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an array of size N. The task is to sort the array elements by completing functions **heapify()** and **buildHeap()** which are used to implement Heap Sort.

__Example 1:__
```
Input:
N = 5
arr[] = {4,1,3,9,7}
Output:
1 3 4 7 9
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1,3,4,7,9.
```
__Example 2:__
```
nput:
N = 10
arr[] = {10,9,8,7,6,5,4,3,2,1}
Output:
1 2 3 4 5 6 7 8 9 10
Explanation:
After sorting elements
using heap sort, elements will be
in order as 1, 2,3,4,5,6,7,8,9,10.
```
__Your Task__

You don't have to read input or print anything. Your task is to complete the functions heapify(), buildheap() and heapSort() where heapSort() and buildheap() takes the array and it's size as input and heapify() takes the array, it's size and an index i as input. Complete and use these functions to sort the array using heap sort algorithm.
**Note:** You don't have to return the sorted list. You need to sort the array "arr" in place.

__Expected Time Complexity:__ O(N * Log(N))

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= n <= 10<sup>6</sup>
- 1 <= arr<sub>i</sub> <= 10<sup>6</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int lar = i;

        if (left < n and arr[left] > arr[lar])
            lar = left;

        if (right < n and arr[right] > arr[lar])
            lar = right;

        if (lar != i)
        {
            swap(arr[lar], arr[i]);
            heapify(arr, n, lar);
        }
    }

    // Function to build a Heap from array.
    void buildHeap(int arr[], int n)
    {
        for (int i = (n / 2) - 1; i >= 0; i--)
        {
            heapify(arr, n, i);
        }
    }

    // Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
        for (int i = n - 1; i >= 0; i--)
        {
            swap(arr[i], arr[0]);
            heapify(arr, i, 0);
        }
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.heapSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}
```