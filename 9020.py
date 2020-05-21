import math
nlist = [int(input()) for i in range(int(input()))]
plist = [2]
max = 0
for i in nlist:
    if max < i:
        max = i

for i in range(3, max):
    for j in plist:
        if i % j == 0 :
            break
        elif j > int(math.sqrt(i))+1:
            plist.append(i)
            break
    if j == plist[-1]:
        plist.append(i)

for k in range(len(nlist)):
    for i in range(len(plist)):
        for j in range(i, -1, -1):
            if nlist[k] == plist[i]+ plist[j]:
                print(str(plist[j])+ ' ' +str(plist[i]))
                break