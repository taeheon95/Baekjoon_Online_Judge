n = int(input())
i36str = [input()[::-1] for i in range(n)]
i36int = [[] for i in range(len(i36str))]
maxlen = 0
for i in range(n):
    if len(i36str[i]) > maxlen:
        maxlen = len(i36str[i])
    for j in range(len(i36str[i])):
        if ord(i36str[i][j]) >= ord('0') and ord(i36str[i][j]) <= ord('9'):
            i36int[i].append(ord(i36str[i][j]) - ord('0'))
        else :
            i36int[i].append(ord(i36str[i][j]) - ord('A') + 10)
i36col = [[] for i in range(maxlen)]
for j in range(maxlen):
    for k in range(n):
        if len(i36int[k]) > j:
            i36col[j].append(i36int[k][j])

k = int(input())
klist = []
for i in range(len(i36col)-1,-1,-1):
    i36col[i].sort()
    for j in range(len(i36col[i])):
        if k > 0:
            if i36col[i][j] not in klist:
                klist.append(i36col[i][j])
                k -= 1
                i36col[i][j] = 35
            else:
                i36col[i][j] = 35
        else :
            if i36col[i][j] in klist:
                i36col[i][j] = 35

sum = [0 for i in range(len(i36col))]
for i in range(len(i36col)):
    sum[i] += i36col[i][::1]