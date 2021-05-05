N=int(input())
s=[list(map(lambda x: ord(x)-55 if ord(x)>=65 else int(x),input()[::-1])) for i in range(N)]
K=int(input())

nd={i:0 for i in sum(s,[])}
for i in nd:
    temp=[0 for i in range(max(map(len,s)))]
    for j in s:
        for k in range(len(j)):
            if j[k] == i:
                temp[k] += 35
            else:
                temp[k] += j[k]
    j=0
    while j < len(temp):
        if temp[j] > 35:
            if j+1 == len(temp):
                temp.append(0)
            temp[j+1] += temp[j]//36
        temp[j]%=36
        j+=1
    nd[i] = temp[::-1]

if len(nd)>=K:
    nl=[sorted(nd.items(),key=lambda x:(len(x[1]),x[1]),reverse=True)[i][0] for i in range(K)]
else:
    nl = [sorted(nd.items(), key=lambda x: (len(x[1]), x[1]), reverse=True)[i][0] for i in range(len(nd))]
ans = [0 for i in range(max(map(len,s)))]
for i in s:
    for j in range(len(i)):
        if i[j] in nl:
            ans[j] += 35
        else: ans[j] += i[j]

i=0
while i<len(ans):
    if ans[i] >35:
        if i+1 == len(ans):
            ans.append(0)
        ans[i+1] += ans[i]//36
    ans[i]%=36
    i+=1
print("".join(map(lambda x: chr(x+55) if x>=10 else str(x), ans[::-1])))
