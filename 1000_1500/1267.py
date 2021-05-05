n=int(input())
l=[*map(int,input().split())]
y=sum(map(lambda x:(x//30+1)*10,l))
m=sum(map(lambda x:(x//60+1)*15,l))
if y>m:print("M",m)
elif y<m:print("Y",y)
else:print("Y M",y)