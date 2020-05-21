e,f,c = map(int,input().split())
e += f
r = 0
while e>=c:
    r += e//c
    ee = e//c
    e %= c
    e += ee

print(r)