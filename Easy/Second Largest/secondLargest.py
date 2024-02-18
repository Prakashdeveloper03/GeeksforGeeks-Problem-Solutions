class Solution : def print2largest(self, arr, n)
    : s = set(arr) arr = list(s) arr.sort() n1 =
          len(arr) if n1 ==
          1 : return -1 return arr[n1 - 2]

              if __name__
              == "__main__" : tc =
              int(input()) while tc > 0 : n = int(input()) arr =
                  list(map(int, input().strip().split())) ob = Solution() ans =
                      ob.print2largest(arr, n) print(ans) tc -= 1
