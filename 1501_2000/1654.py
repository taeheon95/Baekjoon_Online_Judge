K,N=map(int,input().split())
l=[int(input())for _ in [0]*K]
b=0;t=max(l)
while True:
    if b==t-1:break
    mid=(b+t)//2
    if sum(a//mid for a in l)>=N:
        b=mid
    else:t=mid
print(b)