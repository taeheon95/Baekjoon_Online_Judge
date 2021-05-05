n = sorted([[int(input()), i+1] for i in range(8)], reverse = True)
np = sorted([n[i] for i in range(5)], key= lambda n:n[1])
s = sum(np[i][0] for i in range(5))
print(s)
for i in range(5):
    print(np[i][1],end=' ')
print()