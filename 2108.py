import sys
from collections import Counter
sum = 0
nlist = [int(sys.stdin.readline().rstrip()) for i in range(int(sys.stdin.readline().rstrip()))]
for i in range(len(nlist)):
    sum += nlist[i]
sys.stdout.writelines('%.0f\n' %(sum/len(nlist)))
nlist = sorted(nlist)
if len(nlist) == 1:
    print(nlist[0])
    print(nlist[0])
    print(0)
    sys.exit()
sys.stdout.writelines(str(nlist[len(nlist)//2])+'\n')
cnt = Counter(nlist)
cnt = sorted(cnt.items(), key= lambda x: (-x[1], x[0]))

if cnt[0][1] == cnt[1][1]:
    print(cnt[1][0])
else :
    print(cnt[0][0])

print(nlist[-1] - nlist[0])