com=[[0 for i in [0]*31] for j in [0]*31]
for i in range(31):
    com[i][i] = 1
    com[i][0] = 1

def combi(m,n):
    if com[m][n] != 0:
        return com[m][n]
    else:
        com[m][n] = combi(m-1, n) + combi(m-1,n-1)
        return com[m][n]

for T in range(int(input())):
    a,b = map(int, input().split())
    if a>b:
        print(combi(a,b))
    else:
        print(combi(b,a))

