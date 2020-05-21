ans = 0
for _ in [0]*int(input()):
    s = input()
    l = []
    for i in s:
        if len(l)==0 or l[-1] != i:
            l.append(i)
        else:
            l.pop(len(l)-1)
    if len(l)==0 : ans+=1
print(ans)