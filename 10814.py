n = int(input())
nlist= []
for i in range(n):
    nlist.append(list(input().split()))
    nlist[i].insert(1,i)
    nlist[i][0] = int(nlist[i][0])

nlist.sort()
for i in range(n):
    print(str(nlist[i][0]) + ' ' + nlist[i][2])