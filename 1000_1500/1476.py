e, s, m = map(int, input().split())
year = 0
while 1:
    a = year % 15
    b = year % 28
    c = year % 19
    if a+1 == e and b+1 == s and c+1 == m:
        break
    year += 1
print(year+1)