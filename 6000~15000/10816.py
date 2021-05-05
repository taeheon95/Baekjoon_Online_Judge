from collections import Counter
n = int(input())
nl = list(map(int,input().split()))
count = Counter(nl)
m = int(input())
ml = list(map(int,input().split()))
for i in range(m):
    if ml[i] in count:
        print(count[ml[i]], end=' ')
    else: print(0, end=' ')
print()