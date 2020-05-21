import sys
n = int(sys.stdin.readline().rstrip())
ndict={}
for i in range(n):
    nnum = int(sys.stdin.readline().rstrip())
    if nnum not in ndict:
        ndict[nnum] = 1
    else :
        ndict[nnum] += 1

sorted(ndict)
for i in ndict.keys():
    for j in range(ndict[i]):
        sys.stdout.writelines(str(i)+'\n')