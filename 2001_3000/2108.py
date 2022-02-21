import sys

ndict = {i:0 for i in range(-4000,4001)}
# n 의 갯수
numOfN = int(sys.stdin.readline().rstrip())
for i in range(numOfN):
    inp = int(sys.stdin.readline().rstrip())
    ndict[inp] += 1

nlist = []
for [key, value] in ndict.items():
    for _ in range(value):
        nlist.append(key)

orderByCommon = sorted(ndict.items(), key=lambda item:item[1], reverse=True)
print(round(sum(nlist)/numOfN))
print(nlist[numOfN//2])
if len(orderByCommon) > 1:
    if orderByCommon[0][1] == orderByCommon[1][1]:
        print(orderByCommon[1][0])
    else: print(orderByCommon[0][0])
else:
    print(orderByCommon[0][0])
print(nlist[-1]-nlist[0])
