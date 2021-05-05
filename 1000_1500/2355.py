A,B=map(int,input().split())
n=max(A,B)-min(A,B)
s=n*(n+1)//2
print(s+min(A,B)*(n+1))