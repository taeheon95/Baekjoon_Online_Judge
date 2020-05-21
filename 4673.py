def d(n, nlist):
    strn = str(n)
    intn = n
    for i in range(len(strn)):
        intn += int(strn[i])
    if intn <= 10000 and intn not in nlist:
        nlist.append(intn)

n = 1
nlist = []
for i in range(10001):
    d(i, nlist)

for i in range(10001):
    if i not in nlist:
        print(i)