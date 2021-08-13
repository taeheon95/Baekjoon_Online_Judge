import re

def solution():
    checkRE = re.compile("(100+1+|01)+")
    print("SUBMARINE" if checkRE.fullmatch(input()) else "NOISE")

if __name__ == "__main__" :
    solution()