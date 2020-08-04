p_max=0
for i in range(int(input())):
    f,s,t=map(int,input().split())
    pm=0
    if f==s and s==t:
        pm = 10000+f*1000
        p_max=max(pm,p_max)
    elif f==s:
        pm = 1000+f*100
        p_max=max(pm,p_max)
    elif s==t:
        pm = 1000+s*100
        p_max=max(pm,p_max)
    elif f==t:
        pm = 1000+f*100
        p_max=max(pm,p_max)
    else:
        pm = max(f,s,t)*100
        p_max=max(pm,p_max)
print(p_max)