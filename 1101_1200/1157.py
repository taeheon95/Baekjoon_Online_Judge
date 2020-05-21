import sys
sr = sys.stdin.readline().rstrip().upper()
sdict = {}
for i in range(len(sr)):
    if sr[i] in sdict.keys():
        sdict[sr[i]] += 1
    else:
        sdict[sr[i]] = 1
sk = list(sdict.keys())
sv = list(sdict.values())
sr = [[sv[i], sk[i]] for i in range(len(sk))]
sr.sort(reverse=True)
if len(sr) >= 2:
    if sr[0][0] == sr[1][0]:
        print('?')
    else:
        print(sr[0][1])
else: print(sr[0][1])