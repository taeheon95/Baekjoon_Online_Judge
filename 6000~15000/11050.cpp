#include<iostream>
#include<algorithm>
using namespace std;
int bin[11][11];
int N,K;
int main()
{
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        for(int j=0; j<=min(i,K); j++){
            if(i==j) bin[i][j] = 1;
            else if(j==0) bin[i][j] = 1;
            else bin[i][j] = bin[i-1][j-1]+bin[i-1][j];
        }
    }
    cout<<bin[N][K]<<endl;
}