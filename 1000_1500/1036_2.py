N=int(input())
s=[list(map(lambda x:ord(x)-55 if ord(x)>=65 else int(x),input()[::-1]))for i in range(N)]
K=int(input())
d={i:0 for i in sum(s,[])}
for i in d:
    for j in s:
        for k in range(len(j)):
            if j[k]==i:d[i]+=35*(36**k)
            else:d[i]+=j[k]*(36**k)
if len(d)>=K:l=[sorted(d.items(),key=lambda x:x[1],reverse=True)[i][0] for i in range(K)]
else:l=[sorted(d.items(),key=lambda x:x[1],reverse=True)[i][0] for i in range(len(d))]
b=0
for i in s:
    for j in range(len(i)):
        if i[j] in l:b+=35*(36**j)
        else:b+=i[j]*(36**j)
a=[]
while b>=36:a.append(b%36);b=b//36
a.append(b)
print("".join(map(lambda x: chr(x+55) if x>=10 else str(x),a[::-1])))