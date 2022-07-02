class Solution:
    def duplicates(self, arr, n):
        initialSet = set()
        duplicatesList = set()
        for val in arr:
            if val in initialSet:
                duplicatesList.add(val)
            else:
                initialSet.add(val)
        duplicatesList = sorted(list(duplicatesList))
        return [-1] if len(duplicatesList) == 0 else duplicatesList


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i, end=" ")
        print()
