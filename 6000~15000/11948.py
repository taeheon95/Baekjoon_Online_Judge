l=[int(input())for i in [0]*6]
print(sum(l)-min(l[:4])-min(l[4:]))