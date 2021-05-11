#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N, K;
    vector<int>ans;
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        if(N%i == 0){
            ans.push_back(i);
        }
    }

    if(K <= ans.size())
        cout<<ans[K-1];
    else
        cout<<0;
}