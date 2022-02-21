import sys

ndict = {i:0 for i in range(-4000,4001)}
# n 의 갯수
numOfN = int(sys.stdin.readline().rstrip())

# 사전 자료구조를 만들어서 개수를 구함
for i in range(numOfN):
    inp = int(sys.stdin.readline().rstrip())
    ndict[inp] += 1

nlist = []
# 카운팅 정렬으로 값을 넣어줌
for [key, value] in ndict.items():
    for _ in range(value):
        nlist.append(key)

# 최빈 값을 구하기 위한 리스트
orderByCommon = sorted(ndict.items(), key=lambda item:item[1], reverse=True)

# 산술 평균
print(round(sum(nlist)/numOfN))
# 중앙 값
print(nlist[numOfN//2])
# 최빈 값
if len(orderByCommon) > 1:
    if orderByCommon[0][1] == orderByCommon[1][1]:
        print(orderByCommon[1][0])
    else: print(orderByCommon[0][0])
else:
    print(orderByCommon[0][0])
# 범위
print(nlist[-1]-nlist[0])
