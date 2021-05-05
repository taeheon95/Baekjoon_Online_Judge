for i in range(int(input())):
    a,b = map(int, input().split())
    a %=10
    l = []
    for i in range(1,b+1):
        if str(a**i)[-1] not in l:
            l.append(str(a**i)[-1])
        else:
            break
    r = b%len(l)-1
    if l[r] == '0':
        print(10)
    else:
        print(l[r])