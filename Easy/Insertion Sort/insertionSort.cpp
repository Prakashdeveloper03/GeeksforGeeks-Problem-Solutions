#include <math.h>
#include <stdio.h>
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

class Solution {
public:
  void insert(int arr[], int i) {
    int j = i - 1;
    int key = arr[i];
    while (arr[j] > key && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
      insert(arr, i);
    }
  }
};

int main() {
  int arr[1000], n, T, i;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
  }
  return 0;
}