def main():
    nlist = [int(input()) for _ in range(9)]
    sum = 0
    for i in range(9):
        sum += nlist[i]

    sum -= 100
    for i in range(9):
        for j in range(i):
            if i == j:
                break
            elif nlist[i] + nlist[j] == sum:
                noti = i
                notj = j
                break

    for i in range(9):
        if i == noti or i == notj:
            continue
        print(nlist[i])

if __name__ == '__main__':
    main()