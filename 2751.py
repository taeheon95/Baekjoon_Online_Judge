import sys
nlist=[int(sys.stdin.readline().rstrip()) for i in range(int(sys.stdin.readline().rstrip()))]
nlist.sort()
for i in range(len(nlist)):
    sys.stdout.writelines(str(nlist[i]) + '\n')