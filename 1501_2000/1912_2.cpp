#include<iostream>
#include<algorithm>
using namespace std;

int dp[100000] ={0};
int num[100000] ={0};

int main()
{
    int n, maxnum;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>num[i];
    for(int i=1; i<=n; i++)
    {
        dp[i] = max(dp[i-1], 0) + num[i];
    }
    maxnum = dp[1];
    for(int i=2; i<=n; i++)
        if(maxnum<dp[i])
            maxnum = dp[i];
    cout<<maxnum;
}