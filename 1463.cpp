#include<iostream>

using namespace std;

int dp[1000001] = {0,0,1,1};

int dpmaking(int n)
{
    if(n != 0)
        return dp[n];
    else if(n%3 == 0)
        return dp[n] = dpmaking(n/3)+1;
    else if(n%2 == 0)
        return dp[n] = dpmaking(n/2)+1;
    else
        return dp[n] = dpmaking(n-1)+1;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<dpmaking(n)<<endl;
}