a,b=map(int,input().split())
l=[(a+b)//2,(a-b)//2]
if (a+b)%2 != 0 or (a-b)%2 !=0:
    print(-1)
else:
    if l[0]>=0 and l[1]>=0:
        print(max(l),min(l))
    else:print(-1)