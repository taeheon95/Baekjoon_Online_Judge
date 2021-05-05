n=int(input())
ans=5
if n > 1:
    for i in range(n-1):
        ans += 7+3*i
        ans %=45678

print(ans)
