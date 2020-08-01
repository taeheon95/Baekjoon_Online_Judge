import sys
N,M=map(int,sys.stdin.readline().split())
l=[*map(int,sys.stdin.readline().split())]
u,li=1,max(l)
while u<=li:
    m=(u+li)//2
    s=0
    for i in l:
        if i>m:
            s+=i-m
    if s>=M:
        li=m+1
    else:
        u=m-1
print(li)