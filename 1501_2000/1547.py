cup=[1,0,0]
M=int(input())
for i in range(M):
    x,y=map(int, input().split())
    cup[x-1],cup[y-1] = cup[y-1],cup[x-1]
print(cup.index(1)+1)