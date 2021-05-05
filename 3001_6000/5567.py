n = int(input())
nl = [[0 for i in range(n)] for j in range(n)]
for i in range(int(input())):
    a, b = map(int, input().split())
    nl[a-1][b-1] = 1
    nl[b-1][a-1] = 1

for i in range(1,n):
    for j in range(1,n):
        if nl[i][j] == 1:
            if nl[i][0] ==1 and nl[j][0] ==1:
                continue
            elif nl[j][0] == 1:
                nl[i][0] = 2
                nl[0][i] = 2
            elif nl[i][0] == 1:
                nl[j][0] = 2
                nl[0][j] = 2

cnt =0
for i in range(n):
    if nl[0][i] >0:
        cnt+=1

print(cnt)