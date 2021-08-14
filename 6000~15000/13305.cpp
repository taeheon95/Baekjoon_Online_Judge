#include<iostream>

using namespace std;

long long dist[100001];
long long price[100001];
long long sum;
long long now;

int main()
{
    int N, i;
    cin>>N;
    for(i=1; i<=N-1; i++)
        cin>>dist[i];
    for(i=1; i<=N; i++)
        cin>>price[i];

    now = 1000000000;
    
    for(int i=1; i<=N-1; i++){
        now = (price[i]<now)? price[i]:now;
        sum += now*dist[i];
    }
    cout<<sum;
}