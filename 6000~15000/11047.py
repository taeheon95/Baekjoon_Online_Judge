n,k = map(int,input().split())
nlist = [int(input()) for i in range(n)]
nlist.reverse()
count = 0
for i in range(n):
    count += k//nlist[i]
    k %= nlist[i]
    if k==0:
        break

print(count)