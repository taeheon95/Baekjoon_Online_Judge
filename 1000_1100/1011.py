for i in range(int(input())):
    x, y = map(int, input().split())
    length = y - x
    llist = []
    sum = 0
    i = 1
    while sum < length:
        if sum < length:
            sum += i
            llist.append(i)
        if sum < length:
            sum += i
            llist.append(i)
        i+=1
    print(len(llist))