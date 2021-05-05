from collections import Counter
n = int(input())
nl = [int(input()) for _ in range(n)]
count = Counter(nl)
if count[0] > count[1]:
    print("Junhee is not cute!")
else:
    print("Junhee is cute!")