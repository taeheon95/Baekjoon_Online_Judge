N=input()
li=list(map(int,input().split()))
numli=sorted(list(set(li)))
dic={numli[i]:i for i in range(len(numli))}
for i in li:print(dic[i], end=' ')