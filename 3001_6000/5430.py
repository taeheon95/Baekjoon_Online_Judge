for t in range(int(input())):
    p = list(input())
    flag = True
    eflag = False
    n = int(input())
    if n !=0:
        nl = list(map(int, input()[1:-1].split(',')))
    else:
        nl = []
    for char in p:
        if char == 'R':
            flag = not flag
        elif char == 'D':
            if len(nl)> 0:
                if flag == True:
                    nl.pop(0)
                else:
                    nl.pop(-1)
            else:
                eflag = not eflag
                break
    if flag == 0:
        nl.reverse()
    if eflag == True:
        print("error")
    elif len(nl) != 0:
        for i in range(len(nl)):
            if i==0:
                print('['+str(nl[i])+',', end='')
            elif i == len(nl)-1:
                print(str(nl[i])+']')
            else:
                print(str(nl[i])+',', end = '')
