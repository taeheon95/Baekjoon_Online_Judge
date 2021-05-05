n = [int(input()) for _ in range(3)]
cola = int(input())
cyder = int(input())
n.sort()
if cola < cyder :
    print(cola+n[0]-50)
else :
    print(cyder+n[0]-50)