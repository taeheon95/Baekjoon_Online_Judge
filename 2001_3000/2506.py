N=int(input())
L=input().split('0')
a=[i.split() for i in L]
print(sum([len(i)*(len(i)+1)//2 for i in a]))