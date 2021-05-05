m = int(input())
n = int(input())
plist = []
for i in range(m, n+1):
    test = 1
    j = 2
    while j< i:
        if i % j ==0:
            test = 0
            break
        else: j+=1
    if test == 1:
        plist.append(i)

if not plist:
    print("-1")
else :
    sum = 0
    for i in plist:
        sum+=i
    print(str(sum)+'\n'+str(plist[0]))