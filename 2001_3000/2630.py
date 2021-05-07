N = int(input())

paper = [list(map(int, input().split())) for _ in range(N)]

def make_blue_paper(x, y, n):
    if(n==1):
        return paper[x][y]
    
    result = 0
    for i in range(x, x+n):
        for j in range(y, y+n):
            if(paper[i][j] != 1):
                result += make_blue_paper(x, y, n//2)
                result += make_blue_paper(x, y+n//2, n//2)
                result += make_blue_paper(x+n//2, y, n//2)
                result += make_blue_paper(x+n//2, y+n//2, n//2)
                return result
    
    return paper[x][y]

def make_white_paper(x, y, n):
    if(n==1):
        return 1-paper[x][y]

    result = 0
    for i in range(x, x+n):
        for j in range(y, y+n):
            if(paper[i][j] != 0):
                result += make_white_paper(x, y, n//2)
                result += make_white_paper(x, y+n//2, n//2)
                result += make_white_paper(x+n//2, y, n//2)
                result += make_white_paper(x+n//2, y+n//2, n//2)
                return result
    
    return 1

print(make_white_paper(0,0,N))
print(make_blue_paper(0,0,N))