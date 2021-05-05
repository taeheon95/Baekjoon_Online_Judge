from collections import Counter
name = [input() for _ in range(int(input()))]
n1 = [n[0] for n in name]
count = Counter(n1)
cl = sorted([x for x,y in count.items() if y>=5])
if len(cl) == 0:
    print("PREDAJA")
    exit()
for i in cl:
    print(i, end='')
print()