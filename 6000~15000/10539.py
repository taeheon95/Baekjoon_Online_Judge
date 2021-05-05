n = int(input())
b = list(map(int, input().split()))
a = [b[i]*(i+1) for i in range(n)]
for i in range(n-1,0, -1):
    a[i] -= a[i-1]
for i in range(n):
    print(a[i])