import sys
nlist = [list(map(int, sys.stdin.readline().rstrip().split())) for i in range(int(sys.stdin.readline().rstrip()))]
for i in range(len(nlist)):
    nlist[i].reverse()
nlist.sort()
for i in range(len(nlist)):
    sys.stdout.writelines(str(nlist[i][1])+' ' +str(nlist[i][0])+'\n')