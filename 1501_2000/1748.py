import sys
print(sum([len(str(i)) for i in range(1,int(sys.stdin.readline())+1)][::1]))