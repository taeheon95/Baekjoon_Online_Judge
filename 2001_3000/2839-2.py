n = int(input())
if n % 5 == 0:
    print(int(n/5))
else :
    for i in range(int(n/3)+1):
        for j in range(int(n/5)+1):
            if 5*j+3*i == n:
                print(i+j)
                break

        if 5*j+3*i == n:
            break
    if 5*j+3*i !=n:
        print(-1)