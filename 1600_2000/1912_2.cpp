#include<iostream>
#include<algorithm>
using namespace std;

int dp[100000] ={0};
int num[100000] ={0};

int main()
{
    int n, max;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>num[i];
    for(int i=1; i<=n; i++)
    {
        if(dp[i-1] + num[i] > num[i]){
            dp[i] = dp[i-1] + num[i];
        }
        else{
            dp[i] = num[i];
        }
    }
    max = dp[1];
    for(int i=2; i<=n; i++)
        if(max<dp[i])
            max = dp[i];
    cout<<max;
}