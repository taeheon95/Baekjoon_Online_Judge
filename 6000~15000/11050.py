n,k=map(int,input().split())
l=[[0 for i in range(n+1)] for j in range(n+1)]
for i in range(1,n+1):
    for j in range(0,max(i,k+1)):
        if i==j:l[i][j] = 1
        elif j==0:l[i][j] = 1
        else:l[i][j] = l[i-1][j-1]+l[i-1][j]
print(l[n][k])