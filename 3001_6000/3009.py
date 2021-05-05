point= [list(map(int, input().split())) for i in range(3)]
xdict = {}
ydict = {}
for i in range(3):
    if point[i][0] not in xdict:
        xdict[point[i][0]] = 1
    else: xdict[point[i][0]] += 1
    if point[i][1] not in ydict:
        ydict[point[i][1]] = 1
    else: ydict[point[i][1]] += 1

fourthx = [key for key, value in xdict.items() if value == 1]
fourthy = [key for key, value in ydict.items() if value == 1]
fourth = fourthx+fourthy
for i in fourth:
    print(i, end=' ')