def hanoi(n, from_pos, to_pos, aux_pos):
    if n == 1:
        print(str(from_pos)+' '+str(to_pos))
        return
    hanoi(n-1, from_pos, aux_pos, to_pos)
    print(str(from_pos)+' '+str(to_pos))
    hanoi(n-1, aux_pos, to_pos, from_pos)

def main():
    n = int(input())
    print(2**n - 1)
    hanoi(n, 1, 3, 2)

if __name__ == '__main__':
    main()