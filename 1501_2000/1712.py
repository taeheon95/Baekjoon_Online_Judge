a, b, c = map(int, input().split())
num = 0

if b >= c :
    num = -1
else:
    num = a//(c-b) + 1

print(num)