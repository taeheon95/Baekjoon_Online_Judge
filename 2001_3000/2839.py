import sys

n = int(sys.stdin.readline().rstrip())

i = 1
while(n > 3*i*i-9*i+7):
    i += 1

if n == 1:
    print(1)
else: print(i-1)