l,a,b,c,d = [int(input()) for i in range(5)][0:5]
ac = a//c if a%c==0 else a//c+1
bd = b//d if b%d==0 else b//d+1
if ac>bd:
    print(l-ac)
else:
    print(l-bd)