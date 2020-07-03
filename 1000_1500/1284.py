while 1:
    n=input()
    if n=='0':
        break
    s=len(n)+1
    for i in n:
        if i=='1':
            s+=2
        elif i=='0':
            s+=4
        else:
            s+=3
    print(s)