a,b = input()[::-1].split()
MIN = 0
MAX = 0
for i in range(len(a)):
    if a[i] == '5' or a[i] =='6':
        MIN += 5*10**i
        MAX += 6*10**i
    else:
        MIN += int(a[i])*10**i
        MAX += int(a[i])*10**i

for i in range(len(b)):
    if b[i] == '5' or b[i] =='6':
        MIN += 5*10**i
        MAX += 6*10**i
    else:
        MIN += int(b[i])*10**i
        MAX += int(b[i])*10**i

print(MIN, MAX)