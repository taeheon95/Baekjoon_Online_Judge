for i in range(int(input())):
    x,y,z,w,dx,dy,dz,dw = map(int, input().split())
    hp = x+dx if x+dx >=1 else 1
    mp = y+dy if y+dy >=1 else 1
    at = z+dz if z+dz >=0 else 0
    dp = w+dw
    total = hp+5*mp+2*at+2*dp
    print(total)