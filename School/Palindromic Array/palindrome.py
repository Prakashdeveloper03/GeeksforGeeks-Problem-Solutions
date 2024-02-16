def PalinArray(arr, n):
    for x in arr:
        if int(str(x)[::-1]) != x:
            return False
    else:
        return True


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
