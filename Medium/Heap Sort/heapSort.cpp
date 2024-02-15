#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  // Heapify function to maintain heap property.
  void heapify(int arr[], int n, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int lar = i;

    if (left < n and arr[left] > arr[lar])
      lar = left;

    if (right < n and arr[right] > arr[lar])
      lar = right;

    if (lar != i) {
      swap(arr[lar], arr[i]);
      heapify(arr, n, lar);
    }
  }

  // Function to build a Heap from array.
  void buildHeap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
      heapify(arr, n, i);
    }
  }

  // Function to sort an array using Heap Sort.
  void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[i], arr[0]);
      heapify(arr, i, 0);
    }
  }
};

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[1000], n, T, i;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
  }
  return 0;
}