n, m = map(int, input().split())
idx = list(map(int, input().split()))

an = [i for i in range(1, n+1)]

location = 0
count = 0
for i in range(len(idx)):
    if (idx[i] - location) > (len(an) - an.index(idx[i]) + location):
        count += (len(an) - an.index(idx[i]) + location)
    else :
        if(idx[i] - location) < 0:
            count += location - idx[i]
        else :
            count += idx[i] - location
    location = an.index(idx[i])
    an.pop(location)

print(count)