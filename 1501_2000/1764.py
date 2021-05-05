n,m = map(int,input().split())
sn = {input() for _ in range(n)}
sm = {input() for _ in range(m)}
snm = sorted(list(sn&sm))
print(len(snm))
for i in range(len(snm)):
    print(snm[i])