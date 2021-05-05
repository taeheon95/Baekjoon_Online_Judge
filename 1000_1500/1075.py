s=input
N=int(s());F=int(s())
n=N//100
for i in range(100):
    if (n*100 + i)%F == 0:
        if i < 10:
            print('0'+str(i))
        else: print(i)
        break