string = sorted(list({input() for i in range(int(input()))}))
maxlen = 0
for i in range(len(string)):
    if maxlen < len(string[i]):
        maxlen = len(string[i])

stringsort = [[] for i in range(maxlen)]
for i in range(len(string)):
    stringsort[len(string[i])-1].append(string[i])

for i in range(len(stringsort)):
    for j in range(len(stringsort[i])):
        if len(stringsort[i]) != 0:
            print(stringsort[i][j])
