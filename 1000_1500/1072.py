x,y=map(int,input().split())
z=y//x
high=1000000000
low=0
while high>=low:
    mid=(high+low)//2
    if (y+mid)//x==z+1:
        break
    elif (y+mid)//x>z+1:
        high=mid-1
    else:
        low=mid+1

if high>=low:
    print(mid)
else:
    print(-1)