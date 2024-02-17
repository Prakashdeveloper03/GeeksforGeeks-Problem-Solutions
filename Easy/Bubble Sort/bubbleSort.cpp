#include <stdio.h>
void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

class Solution {
 public:
  void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
          swap(&arr[j + 1], &arr[j]);
        }
      }
    }
  }
};

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[1000], n, T, i;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    Solution ob;
    ob.bubbleSort(arr, n);
    printArray(arr, n);
  }
  return 0;
  ;
}