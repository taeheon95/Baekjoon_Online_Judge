n, m = map(int, input().split())
witness = set(map(int, input().split()[1:]))

party_list = []
party_witness = {}

count = 0

for i in range(m):
    party_list.append(list(map(int, input().split()[1:])))
    for j in range(i):
        if 