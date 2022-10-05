# Quick Sort
![made-with-java](https://img.shields.io/badge/Made%20with-Java-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position low and its ending position high.

Implement the partition() and quickSort() functions to sort the array.

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
N = 9
arr[] = { 2, 1, 6, 10, 4, 1, 3, 9, 7}
Output:
1 1 2 3 4 6 7 9 10
```

__Your Task__

You don't need to read input or print anything. Your task is to complete the functions **partition()**  and **quickSort()** which takes the array arr[], low and high as input parameters and partitions the array. Consider the last element as the pivot such that all the elements less than(or equal to) the pivot lie before it and the elements greater than it lie after the pivot.

__Expected Time Complexity:__ O(N * logN)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>3</sup>
- 1 <= arr[i] <= 10<sup>4</sup>

### Solution
```java
import java.util.*;

class Sorting {
    static void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++)
                arr[i] = sc.nextInt();

            new Solution().quickSort(arr, 0, n - 1);
            printArray(arr);
            T--;
        }
        sc.close();
    }
}

class Solution {
    public void quickSort(int arr[], int low, int high) {
        if (low >= high)
            return;
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }

    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static int partition(int arr[], int low, int high) {
        int pivot = arr[low];
        int i = low;

        for (int j = low + 1; j <= high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i, low);
        return i;
    }
}
```