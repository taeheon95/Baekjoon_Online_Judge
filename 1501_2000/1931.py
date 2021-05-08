def solution():
    N = int(input())
    conferences = sorted([list(map(int, input().split())) for i in range(N)], key=lambda x:(x[1],x[0]))
    count = 0
    n = 0
    for conference in conferences:
        if(n<= conference[0]):
            n = conference[1]
            count += 1

    return count

if __name__ == '__main__':
    print(solution())