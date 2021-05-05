for _ in range(3):
    a=sum([int(input()) for n in range(int(input()))])
    print("0"if a==0 else'+'if a>0 else '-')
