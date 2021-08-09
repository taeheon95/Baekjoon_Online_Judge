import re
def solution():
    n = int(input())
    checkStr = input().split("*")
    checkRE = re.compile(checkStr[0]+'\w*'+checkStr[1])
    answer = ["DA" if checkRE.fullmatch(input()) else "NE" for _ in range(n)]
    for i in range(n):print(answer[i])

if  __name__ == '__main__':
    solution()