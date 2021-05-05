import sys
from collections import Counter

n = sys.stdin.readline().rstrip()
nlist = [int(n[i]) for i in range(len(n))]
cnt = Counter(nlist)
cnt69 = cnt[6] + cnt[9]
if cnt69 % 2 == 0:
    cnt[6] = 0
    cnt[9] = int(cnt69/2)
else :
    cnt[6] = 0
    cnt[9] = int(cnt69/2)+1

cnt = sorted(cnt.items(), key=lambda x:(-x[1], x[0]))
print(cnt[0][1])