for t in range(int(input())):
    cnt = 0
    n, k = map(int, input().split())
    nl = list(map(int, input().split()))
    for i in range(n):
        cnt += nl[i]//k
    print(cnt)