import sys
import itertools
def main():
    n , m = map(int, sys.stdin.readline().split())
    nlist = [i for i in range(1, n+1)]
    permut = [list(map(' '.join, itertools.permutations(nlist, m)))]

if __name__ == '__main__':
    main()