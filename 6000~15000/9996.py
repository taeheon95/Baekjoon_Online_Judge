n = int(input())
checkstr = input()
indexofstar = 0
for i in range(len(checkstr)):
    if checkstr[i] == "*":
        indexofstar = i
        break

for i in range(n):
    s = input()
    if checkstr[0:indexofstar] == s[0: indexofstar] and checkstr[indexofstar+1:] == s[-1:len(s)-len(checkstr)+indexofstar:-1]:
        print("DA")
    else:
        print("NE")