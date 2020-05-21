n = sorted(list(map(int, input().split())))
s = list(input())
sl = [ord(s[i]) - ord('A') for i in range(3)]
for i in sl:
    print(n[i])