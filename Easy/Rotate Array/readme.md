# Rotate Array
![made-with-c++](https://img.shields.io/badge/Made%20with-C++-007396.svg)
![terminal](https://img.shields.io/badge/Windows%20Terminal-4D4D4D?logo=windows%20terminal&logoColor=white)
![sublime text](https://img.shields.io/badge/sublime_text-%23575757.svg?logo=sublime-text&logoColor=important)
![vscode](https://img.shields.io/badge/Visual_Studio_Code-0078D4?logo=visual%20studio%20code&logoColor=white)

Given an unsorted array `arr[]` of size `N`. Rotate the array to the left (counter-clockwise direction) by D steps, where `D` is a positive integer.

__Example 1:__
```
Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
```
__Example 2:__
```
Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20
when rotated by 3 elements, it becomes
8 10 12 14 16 18 20 2 4 6.
```
__Your Task__

Complete the function **rotateArr()** which takes the array, D and N as input parameters and rotates the array by D elements. The array must be modified in-place without using extra space.

__Expected Time Complexity:__ O(N)

__Expected Auxiliary Space:__ O(1)

__Constraints:__
- 1 <= N <= 10<sup>6</sup>
- 1 <= D <= 10<sup>6</sup>
- 0 <= arr[i] <= 10<sup>5</sup>

### Solution
```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	void arrreverse(int i, int j, int arr[])
	{
		while (i < j)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	void rotateArr(int arr[], int d, int n)
	{
		d = d % n;
		arrreverse(0, d - 1, arr);
		arrreverse(d, n - 1, arr);
		arrreverse(0, n - 1, arr);
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		Solution ob;
		ob.rotateArr(arr, d, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
```