inputStr=input().split("-")
num=[]
for s in inputStr:
    cnt = 0
    numli = s.split('+')
    for nums in numli:
        cnt += int(nums)
    num.append(cnt)
n=num[0]
for i in range(1, len(num)):n-=num[i]
print(n)