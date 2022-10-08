def strstr(s,x):
    return s.index(x) if x in s else -1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s, p = input().strip().split()
        print(strstr(s, p))
