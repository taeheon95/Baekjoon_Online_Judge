a=int
s=input().split()
print(["YES","NO"][a(s[0])+a(s[2])!=a(s[-1])])