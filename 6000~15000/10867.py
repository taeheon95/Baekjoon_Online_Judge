n=int(input())
li=sorted(list(set(list(map(int,input().split())))))
for i in range(len(li)):print(li[i],end=" ")