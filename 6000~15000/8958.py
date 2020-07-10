s = [input().split('X') for i in range(int(input()))]
ints = [[len(s[i][j])*(len(s[i][j]) + 1)/2 for j in range(len(s[i]))] for i in range(len(s))]
sum = [0 for i in range(len(ints))]
for i in range(len(ints)):
    for j in range(len(ints[i])):
        sum[i] += ints[i][j]

for i in range(len(sum)):
    print(int(sum[i]))