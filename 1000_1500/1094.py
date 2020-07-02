def main():
    makdae = [32,16,8,4,2,1]
    x = int(input())
    if x == 64:
        print(1)
        exit()
    else:
        cnt = 0
        i =0
        while x > 0:
            if x >= makdae[i]:
                x -= makdae[i]
                cnt += 1
            i += 1
        print(cnt)

if __name__ == "__main__":
    main()