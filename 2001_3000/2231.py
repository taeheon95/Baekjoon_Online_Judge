n = input()
for i in range(int(n)):
    sum = i
    istr = str(i)
    for j in istr:
        sum += int(j)

    if sum == int(n):
        print(i)
        break
else:
    print('0')