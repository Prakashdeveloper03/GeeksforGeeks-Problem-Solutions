# Insertion Sort
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

The task is to complete the **insert()** function which is used to implement Insertion Sort.

__Example 1:__
```
Input:
N = 5
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9
```
__Example 2:__
```
Input:
N = 10
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output:
1 2 3 4 5 6 7 8 9 10
```
__Your Task__

You don't have to read input or print anything. Your task is to complete the function **insert()** and **insertionSort()** where insert() takes the array, it's size and an index i and insertionSort() uses insert function to sort the array in ascending order using insertion sort algorithm.

__Expected Time Complexity:__ O(N * N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 1000
- 1 <= arr[i] <= 1000

### Solution
```cpp
#include <stdio.h>
#include <math.h>
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
public:
    void insert(int arr[], int i)
    {
        int j = i - 1;
        int key = arr[i];
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            insert(arr, i);
        }
    }
};

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
        ob.insertionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}
```