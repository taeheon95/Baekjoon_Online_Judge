from math import floor
x,y=map(int,input().split())
z=float(100*y/x)
high=1000000000
low=0
ans = -1
if(z >= 99):print(-1)
else:
    while high>=low:
        mid=(high+low)//2
        if floor((y+mid)*100/(x+mid))>z:
            high=mid-1
        else:
            low=mid+1
    print(high+1)