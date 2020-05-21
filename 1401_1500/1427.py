n = input()
intn = [int(i) for i in n]
intn.sort()
a = 0
for i in range(len(intn)):
    a += intn[i] * 10**i
print(a)