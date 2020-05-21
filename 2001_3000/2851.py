mushi = [int(input()) for _ in range(10)]
sm = [sum(mushi[0:i+1]) for i in range(10)]
mini = 0
for i in range(10):
    if(abs(sm[i]-100) <= abs(sm[mini] - 100)):
        mini = i
print(sm[mini])