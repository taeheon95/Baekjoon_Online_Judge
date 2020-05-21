import sys
N = int(input())
a = [0 for i in range(N+1)]
for n in range(N):
    a[int(input())]+=1
print(sum(a)-N)