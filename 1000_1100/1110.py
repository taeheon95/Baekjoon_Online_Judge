n = [int(input()) for i in range(3)]
count = [0 for i in range(10)]
abc = 1
for i in range(3):
    abc *= n[i]

sabc = str(abc)
for i in range(len(sabc)):
    abc[int(sabc[i])] += 1