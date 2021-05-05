import math

while True:
    a = int(input("구하는 피보나치 수열의 자릿수를 입력해 주세요.(2~17): "))
    if a >= 18 or a <= 1:
        print("조건에 맞지 않습니다. 범위에 맞게 다시 입력해 주세요.")
        continue
    elif a > 1 and a < 18:
        X = 10 ** (a - 1) ; Y = (10 ** a) - 1
        print("Search Range:",[X,Y],".")
        break

Fibo = 0 ; A = 0 ; B = 1
FiboPrimeList = []
while True:
    Fibo = A + B
    if Fibo > Y:
        break
    A = B
    B = Fibo
    if Fibo >= X:
        S = int(math.sqrt(Fibo))
        for i in range(2,S+1):
            R = Fibo % i
            if R == 0:
                break
        if R != 0:
            FiboPrimeList.append(Fibo)

if len(FiboPrimeList) == 0:
    print("There is no Fibonacci Prime number in that range.")
else:
    for F in FiboPrimeList:
        print("Found Fibonacci Prime:", F)