#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int stairs[300] ={0};
int dp[300] = {0};

int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
        cin>>stairs[i];
    dp[0] = stairs[0];
    dp[1] = max(stairs[0]+stairs[1], stairs[1]);
    dp[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);
    for(int i=3; i<N; i++)
    {
        dp[i] = max(dp[i-2]+stairs[i], stairs[i-1]+stairs[i]+dp[i-3]);
    }
    cout<<dp[N-1];
}