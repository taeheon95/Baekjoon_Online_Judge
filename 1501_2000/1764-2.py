from collections import Counter
n,m = map(int,input().split())
nlist = [input() for _ in range(n+m)]
count = Counter(nlist)
nl = [x for x,y in count.items() if y>=2]
print(len(nl))
for i in range(len(nl)):
    print(nl[i])