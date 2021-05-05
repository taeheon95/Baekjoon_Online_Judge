n=int(input())
a = [i for i in range(n)]
nl = list(map(int, input().split()))
p = [a[nl[i]-1] for i in range(n)]
for i in range(n):
    print(p[i])