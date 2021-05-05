for _ in [0]*int(input()):
    x, y = map(int, input().split())
    l = y - x
    t = 0
    s = 0
    i = 1
    while s < l:
        s += i
        t += 1
        if s < l:
            s += i
            t += 1
        i+=1
    print(t)