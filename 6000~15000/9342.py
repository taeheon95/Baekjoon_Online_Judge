import re

def solution():
    for _ in range(int(input())):
        checkRE = re.compile("(A|B|C|D|E|F)?A+F+C+(A|B|C|D|E|F)?")
        print("Infected!" if checkRE.fullmatch(input()) else "Good")

if __name__ == "__main__" :
    solution()