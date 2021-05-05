import sys

n, x = map(int, sys.stdin.readline().rstrip().split())
listA = list(map(int,sys.stdin.readline().rstrip().split()))
for i in range(n):
    if listA[i] < x:
        sys.stdout.writelines(str(listA[i])+'\n')
