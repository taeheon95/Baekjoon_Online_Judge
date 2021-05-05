#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001] = { 0 };
int p[1001] = { 0 };
int N;

int main()
{
    cin>>N;
    for(int i = 1; i<=N; i++){
        cin>>p[i];
    }
    for(int i = 1; i<=N; i++){
        for(int j=1; j<=i; j++){
            dp[i] = max(dp[i], dp[i-j]+p[j]);
        }
    }
    cout<<dp[N];
}