import sys

def main():
    rgblist = [list(map(int,sys.stdin.readline().split())) for _ in range(int(input()))]
    srgb = [sorted(rgblist[i]) for i in range(len(rgblist))]
    sum = 0
    last = 0
    for i in range(len(rgblist)):
        if i == 0:
            sum += srgb[i][0]
            last = srgb[i][0]
        else:
            if rgblist[i-1].index(last) == rgblist[i].index(srgb[i][0]):
                sum += srgb[i][1]
                last = srgb[i][1]
            else:
                sum += srgb[i][0]
                last = srgb[i][0]

    sys.stdout.writelines(str(sum)+'\n')

if __name__ == '__main__':
    main()
