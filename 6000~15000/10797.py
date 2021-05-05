from collections import Counter

n = int(input())
nl = list(map(int,input().split()))
count = Counter(nl)
print(count[n])