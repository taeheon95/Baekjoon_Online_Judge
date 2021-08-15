#include<iostream>

using namespace std;

int main()
{
    int N, i, beforeLevel, ans = 0, desc = 0;
    cin>>N;
    int *scores = new int[N];
    for(i=0; i<N; i++)
        cin>>scores[i];
    
    beforeLevel = scores[N-1];
    for(i=N-2; i>=0; i--){
        desc = 0;
        if(beforeLevel > scores[i]){
            desc = 0;
            ans += desc;
        } else if(beforeLevel < scores[i]){
            desc = scores[i] - beforeLevel + 1;
            ans += desc;
            scores[i] -= desc;
        } else{
            ans += 1;
            scores[i] -= 1;
        }
        beforeLevel = scores[i];
    }
    cout<<ans;
}