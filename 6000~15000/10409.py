N,T=map(int,input().split())
n=[*map(int,input().split())]
l=[]
for i in n:
    if sum(l)+i <= T:
        l.append(i)
    else:
        break
print(len(l))