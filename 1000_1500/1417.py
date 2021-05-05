n=int(input())
l=[int(input())for i in [0]*n]
l[1:].sort()
cnt=l[0]
while n>1 and cnt<=max(l[1:]):l[l[1:].index(max(l[1:]))+1]-=1;cnt+=1
print(cnt-l[0])