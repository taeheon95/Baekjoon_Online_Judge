for i in range(int(input())):
    a,b = map(int, input().split())
    a %=10
    l = [a]
    while (l[-1]*a)%10 != l[0]:
        l.append((l[-1]*a)%10)
    # comment code acts same over the two lines code
    # for i in range(1,b+1):
    #     if a**i%10 not in l:
    #         l.append(a**i%10)
    #     else:
    #         break
    r = b%len(l)-1
    if l[r] == 0:
        print(10)
    else:
        print(l[r])