import sys
nlist = [list(map(int, sys.stdin.readline().rstrip().split())) for i in range(int(sys.stdin.readline().rstrip()))]
nlist.sort()
for i in range(len(nlist)):
    sys.stdout.writelines(str(nlist[i][0])+' ' +str(nlist[i][1])+'\n')