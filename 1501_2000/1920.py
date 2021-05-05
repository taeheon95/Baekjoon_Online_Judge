import sys
n = int(sys.stdin.readline().rstrip())
a = list(map(int, sys.stdin.readline().rstrip().split()))
m = int(sys.stdin.readline().rstrip())
b = list(map(int, sys.stdin.readline().rstrip().split()))
a.sort()

for i in b:
    if i >= a[0] and i <= a[-1]:
        if i in a:
            sys.stdout.writelines('1\n')
    else:
        sys.stdout.writelines('0\n')