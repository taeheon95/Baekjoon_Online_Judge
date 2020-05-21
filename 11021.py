import sys

t = int(sys.stdin.readline().rstrip())
sum = []

for i in range(t):
    a,b = map(int, sys.stdin.readline().rstrip().split())
    sum.append(a+b)

for i in range(t):
    sys.stdout.writelines('Case #'+str(i+1)+': ' + str(sum[i])+'\n')