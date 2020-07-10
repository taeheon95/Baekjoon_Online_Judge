a=[]
for _ in range(3):
    s=0
    for i in range(int(input())):
        s += int(input())
    if s>0:
        a.append("+")
    elif s==0:
        a.append("0")
    else:
        a.append("-")

for i in a:
    print(a)