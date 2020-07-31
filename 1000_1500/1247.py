import sys
ans=[]
for i in range(3):
    s=sum([int(sys.stdin.readline()) for j in range(int(sys.stdin.readline()))])
    ans.append('0' if s==0 else '-' if s<0 else '+' )
print('\n'.join(ans))