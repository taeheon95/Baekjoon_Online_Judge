n = [input() for _ in range(5)]
s = ''
ml = max(n[::1], key=len)
for i in range(5):
    if len(n[i]) < len(ml):
        n[i] += ' '*(len(ml) - len(n[i]))

for i in range(len(ml)):
    for j in range(5):
        if n[j][i] != ' ':
            s += n[j][i]

print(s)