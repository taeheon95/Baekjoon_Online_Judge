t = int(input())

case = [list(map(int, input().split())) for i in range(t)]

N = [divmod(case[i][2], case[i][0]) for i in range(t)]

r =[]

for i in range(len(N)):
    if N[i][1] == 0:
        if N[i][0] < 10:
            r.append(str(case[i][0]) +'0'+ str(N[i][0]))
        else:
            r.append(str(case[i][0]) + str(N[i][0]))
    else:
        if N[i][0] < 10:
            r.append(str(N[i][1])+'0'+str(N[i][0]+1))
        else:
            r.append(str(N[i][1])+str(N[i][0]+1))
    print(r[i])