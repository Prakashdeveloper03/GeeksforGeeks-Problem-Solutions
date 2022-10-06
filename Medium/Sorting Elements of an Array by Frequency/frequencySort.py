from functools import cmp_to_key


def sortByVal(a, b):
    return a[0] - b[0] if (a[1] == b[1]) else b[1] - a[1]


def sortByFreq(a, n):
    res = []
    m = {}
    for i in range(n):
        m[a[i]] = m[a[i]] + 1 if (a[i] in m) else 1
    v = [[key, value] for key, value in m.items()]
    v.sort(key=cmp_to_key(sortByVal))

    for item in v:
        while item[1]:
            res.append(item[0])
            item[1] -= 1
    return res


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]
        res = sortByFreq(arr, n)
        for val in res:
            print(val, end=" ")
        print()
