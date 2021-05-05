nl = [0 for i in range(1001)]
for i in range(1, 1001):
    for j in range(i+1):
        nl[i] += i+j

n = int(input())
print(sum(nl[0:n+1]))