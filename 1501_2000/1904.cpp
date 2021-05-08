#include<iostream>
using namespace std;
int tile[1000001]={0};
int main(){
    int N;
    cin>>N;
    tile[1]=1;tile[2]=2;
    for(int i=3; i<=N;i++)
        tile[i] = (tile[i-1]+tile[i-2])%15746;
    cout<<tile[N];
}