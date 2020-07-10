a,b,c=map(int,input().split())
d=a/(c*c+b*b)**0.5
print(int(d*b),int(d*c))