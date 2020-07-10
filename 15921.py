import collections
n=int(input())
if n==0:print("divide by zero");exit(0)
l=[*map(int,input().split())]
dl=collections.Counter(l)
al=[*map(lambda x:x[0]*x[1]/n,dl.items())]
print("%0.2f"%(sum(l)/n/sum(al)))