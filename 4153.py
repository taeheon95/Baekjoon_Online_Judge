while(1):
    length = list(map(int, input().split()))
    t = 0
    if length[0] == 0 and length[1] == 0 and length[2] == 0:
        break
    else :
        sum = 0
        for i in range(len(length)):
            sum += length[i]*length[i]
        for i in range(3):
            if sum - length[i]*length[i] == length[i]*length[i]:
                t=1
                break
        if t == 1:
            print('right')
        else: print('wrong')