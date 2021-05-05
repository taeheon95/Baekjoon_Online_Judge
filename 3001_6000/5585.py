n = int(input())
n = 1000-n
nlist = [500,100,50,10,5,1]
count = 0
i = 0
while n !=0:
    c=0
    c,n = divmod(n,nlist[i])
    count += c
    i+=1
print(count)