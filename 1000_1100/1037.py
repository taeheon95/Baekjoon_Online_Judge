n = int(input())
sn = []
for i in range(n):
    sn.append(int(input()))

sn.sort()
print(int(sn[-1])*int(sn[0]))