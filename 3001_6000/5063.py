n = [list(map(int, input().split())) for _ in range(int(input()))]
for i in n:
    if i[1] - i[2] == i[0]:
        print("does not matter")
    elif i[1] - i[2] > i[0]:
        print("advertise")
    else:
        print("do not advertise")