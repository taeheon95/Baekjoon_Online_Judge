r,c,n=map(int,input().split())
print((r//n+(r%n!=0))*(c//n+(c%n!=0)))