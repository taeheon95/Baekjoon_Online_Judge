s = [input() for _ in [0]*int(input())]
f = int(input())
if f==1:
    for i in range(len(s)):
        print(s[i])
elif f==2:
    for i in range(len(s)):
        print(s[i][::-1])
elif f==3:
    for i in range(len(s)-1, -1, -1):
        print(s[i])