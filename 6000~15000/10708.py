n = int(input())
score = [0 for i in range(n)]
m = int(input())
a = list(map(int, input().split()))
b = [list(map(int, input().split())) for i in range(m)]
for i in range(m):
    count = 0
    for j in range(n):
        if b[i][j] == a[i]:
            score[j]+=1
        else:
            count += 1
    score[a[i]-1] += count

for i in range(n):
    print(score[i])