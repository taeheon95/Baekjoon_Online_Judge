for i in range(int(input())):
    sc=0
    sg=0
    for j in range(int(input())):
        c, g = input().split()
        sc += int(c)
        sg += float(g) *int(c)
    print(sc, round(sg/sc,1))