def main():
    play = [list(map(int, input().split())) for _ in range(3)]
    sp = [sum(play[i]) for i in range(3)]
    for i in range(3):
        if sp[i] == 1:
            print("C")
        elif sp[i] == 2:
            print("B")
        elif sp[i] == 3:
            print("A")
        elif sp[i] == 4:
            print("E")
        else:
            print("D")

if __name__ == "__main__":
    main()