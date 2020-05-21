import math
import sys
m, n = map(int, sys.stdin.readline().split())
plist = [2]
for i in range(3, n+1):
    for j in plist:
        if i % j == 0 :
            break
        elif j > int(math.sqrt(i))+1:
            plist.append(i)
            break
    if j == plist[-1]:
        plist.append(i)

for i in plist:
    if i >= m:
        sys.stdout.writelines(str(i)+'\n')