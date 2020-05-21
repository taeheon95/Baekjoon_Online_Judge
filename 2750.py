import sys
n = int(sys.stdin.readline().rstrip)
an = []
for i in range(n):
    an.append(int(sys.stdin.readline().rstrip))

an.sort()
for i in range(n):
    print(an[i])