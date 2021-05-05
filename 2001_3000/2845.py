L,P=map(int,input().split())
print(*[x-L*P for x in map(int,input().split())])