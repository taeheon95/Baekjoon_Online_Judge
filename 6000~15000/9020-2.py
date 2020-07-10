nlist = []
max = 0
for i in range(int(input())):
    num = int(input())
    if max < num:
        max = num
    nlist.append(num)

numlist = [[i, True] for i in range(max+1)]
plist = []
for i in range(2, max+1):
    if numlist[i][1] == False:
        continue
    else:
        plist.append(i)
        for j in range(2*i, max+1, i):
            numlist[j][1] = False

adddict = {nlist[i]:[0, nlist[i]] for i in range(len(nlist))}

for i in range(len(plist)):
    for j in range(i+1):
        if plist[i]+plist[j] in adddict:
            if adddict.get(plist[i]+plist[j])[1] -  adddict.get(plist[i]+plist[j])[0] > plist[i] - plist[j]:
                adddict[plist[i]+plist[j]] = [plist[j], plist[i]]

for i in adddict.values():
    print(str(i[0])+ ' ' + str(i[1]))