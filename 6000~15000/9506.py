import math
def main():
    while 1:
        n = int(input())
        if n == -1:
            break
        nlist = []
        for i in range(1,int(n/2)+1):
            if n % i == 0:
                nlist.append(i)
        sum = 0
        for i in nlist:
            sum += i
        if sum == n:
            print(sum, end=' = ')
            for i in range(len(nlist)):
                if i != len(nlist)-1:
                    print(nlist[i], end= ' + ')
                else:
                    print(nlist[i])
        else:
            print(n, 'is NOT perfect')

if __name__ == '__main__':
    main()