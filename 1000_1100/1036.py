charn = [str(i) for i in range(10)] + [chr(i) for i in range(ord('A'), (ord('Z')+1))]
i36 = {charn[i]:i for i in range(36)}
del charn
i36str = [input() for i in range(int(input()))]
i36int = [[] for i in range(len(i36str))]
for i in range(len(i36str)):
    for j in range(len(i36str[i])):
        i36int[i].append(i36[i36str[i][j]])
del i36str
maxlen = 0
for i in range(len(i36int)):
    if maxlen < len(i36int[i]):
        maxlen = len(i36int[i])
i36col = [[] for i in range(maxlen)]

for i in range(len(i36int)):
    for j in range(len(i36int[i])):
        i36col[j].append(i36int[i][len(i36int[i])-1-j])
for i in i36col:
    i.sort()
i36col.reverse()

mininum = []
k = int(input())
a = 0
b = 0
while len(mininum) < k:
    if i36col[a][b] in mininum:
        b+=1
        if b == len(i36col[a]):
            a+=1
            b =0
        continue
    else:
        mininum.append(i36col[a][b])

sum = [0 for i in range(maxlen)]
for i in range(len(i36col)):
    for j in range(len(i36col[i])):
        if i36col[i][j] in mininum:
            i36col[i][j] = 35
        sum[i] += i36col[i][j]
print(i36col)
print(sum)
sum.reverse()
for i in range(len(sum)):
    if i+1 < len(sum):
        sum[i+1] +=  sum[i]//36
        sum[i] %= 36
    else:
        sum.append(sum[i]//36)
        sum[i] %= 36
sum.reverse()
print(sum)
for s in sum:
    result = [k for k, v in i36.items() if v == s]
print(result)