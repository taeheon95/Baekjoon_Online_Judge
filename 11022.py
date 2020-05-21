import sys

t = int(sys.stdin.readline().rstrip())
ab = [list(map(int, sys.stdin.readline().rstrip().split())) for i in range(t)]
sum = [ab[i][0]+ab[i][1] for i in range(t)]


for i in range(t):
    sys.stdout.writelines('Case #'+str(i+1)+': '+ str(ab[i][0]) + ' + ' + str(ab[i][1]) + ' = ' + str(sum[i])+'\n')