r=[1,1,2,2,2,8]
c=[*map(int, input().split())]
print(*[r[i]-c[i] for i in range(6)])