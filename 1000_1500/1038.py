N=int(input())
nl=[0]
for i in range(1, 1000001):
    bef = 0
    flags = True
    j = i
    while j != 0:
        if bef < j % 10 :
            bef , j = divmod(j, 10)
        else:
            flags = False
    if flags:
        nl.append(i)

if N>=len(nl) or N<0:
    print(-1)
else: print(nl[N])