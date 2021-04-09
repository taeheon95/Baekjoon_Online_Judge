n = int(input())

tile = [0 for i in range(n)]
dp = [0 for i in range(n)]
for i in range(n):
    if i == 0:
        tile[i] = 1
        dp[i] = 4
    elif i == 1:
        tile[i] = 1
        dp[i] = dp[i-1] + tile[i] * 2
    else:
        tile[i] = tile[i-1] + tile[i-2];
        dp[i] = dp[i-1] + tile[i] * 2

print(dp[n-1])
