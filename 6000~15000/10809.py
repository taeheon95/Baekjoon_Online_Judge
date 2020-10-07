a={chr(i):-1 for i in range(97,123)}
s=input()
for i in range(len(s)):
    if a[s[i]]==-1 :a[s[i]]=i
for i in a.values():print(i,end=' ')