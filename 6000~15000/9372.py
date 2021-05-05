import sys
result = []
for i in range(int(sys.stdin.readline().rstrip())):
    n, m = map(int, sys.stdin.readline().rstrip().split())
    route = [list(map(int, sys.stdin.readline().rstrip().split())) for i in range(m)]
    print(n-1)