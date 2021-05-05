n = int(input())
count = n
gwords = [input() for i in range(n)]
check = [[] for i in range(n)]
for i in range(n):
    for j in range(len(gwords[i])):
        if gwords[i][j] not in check[i]:
            check[i].append(gwords[i][j])
        elif gwords[i][j] != gwords[i][j-1]:
            count -= 1
            break
print(count)