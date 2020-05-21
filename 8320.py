n = int(input())
nl = []
for i in range(n):
    if i % 2 == 0:
        nl.append(1)
    else:
        if i == 1:
            nl.append(1)
        else:
            nl.append(2)

print(sum(nl))