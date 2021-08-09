import re
n = int(input())
contacts = [input() for _ in range(n)]
answer = ["NO" for _ in range(n)]
cre = re.compile('(100+1+|01)+')

for i in range(n):
    if cre.fullmatch(contacts[i]): answer[i]="YES"

for i in range(n):
    print(answer[i])