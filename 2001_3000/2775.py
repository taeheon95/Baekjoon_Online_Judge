import sys

T = int(sys.stdin.readline().rstrip())

rp = []

for i in range(T):
    k = int(sys.stdin.readline().rstrip())
    n = int(sys.stdin.readline().rstrip())
    rp = [[0]*n for l in range(k)]
    for j in range(k):
        for p in range(n):
            if j == 0:
                rp[j][p] = p+1
            else:
                if p == 0:
                    rp[j][p] = 1
                else:
                    rp[j][p] = rp[j-1][p]+rp[j][p-1]
    print(rp[k][n])
    