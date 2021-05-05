x, y = map(int, input().split())
money = x*1000/y
n = int(input())
nl = [list(map(int, input().split())) for i in range(n)]
for i in range(n):
    nmoney = nl[i][0]*1000/nl[i][1]
    if money > nmoney:
        money = nmoney

print(round(money, 2))