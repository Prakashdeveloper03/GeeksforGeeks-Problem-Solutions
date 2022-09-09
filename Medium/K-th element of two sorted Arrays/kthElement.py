class Solution:
    def kthElement(self, arr1, arr2, n, m, k):
        res = arr1 + arr2
        res.sort()
        return res[k - 1]


def main():
    T = int(input())
    while T > 0:
        sz = [int(x) for x in input().strip().split()]
        n, m, k = sz[0], sz[1], sz[2]
        a = [int(x) for x in input().strip().split()]
        b = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.kthElement(a, b, n, m, k))
        T -= 1


if __name__ == "__main__":
    main()
