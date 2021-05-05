n=int(input())
l=[float(input())*0.8 for i in [0]*n]
for i in l:print("$%0.2f"%round(i,2))