import math

xa, ya, xb, yb, xc, yc = map(int, input().split())

a = math.sqrt((xa - xb)**2 + (ya - yb)**2)
b = math.sqrt((xb - xc)**2 + (yb - yc)**2)
c = math.sqrt((xc - xa)**2 + (yc - ya)**2)

li = sorted([a, b, c])

if a == 0 or b == 0 or c == 0:
    print(-1)
elif (xa - xb)*(yc - ya) == (xc-xa)*(ya-yb):
    print(-1)
else:
    print((li[2]-li[0])*2)
