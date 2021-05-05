N = input()
while N != "0":
    n = sum(map(int,N))
    while n > 9:
        n = sum(map(int, str(n)))
    print(n)
    N=input()