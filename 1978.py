n = int(input())
count = n
nlist = list(map(int, input().split()))
for i in nlist:
    if i == 1:
        count -= 1
        continue
    elif i == 2:
        continue
    for j in range(2,i):
        if i % j == 0:
            count -= 1
            break
print(count)