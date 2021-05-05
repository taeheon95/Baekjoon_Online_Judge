#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N,M;
    cin>>N>>M;
    vector<long long> tree(N);
    long long start = 1, end=0;
    long long mid = 0;
    for(int i=0; i<N; i++){
        cin>>tree[i];
        end=max(end,tree[i]);
    }
    while(start <= end){
        mid = (start+end)/2;
        long long sot = 0;
        for(long long& i : tree){
            if(i>=mid)
                sot += i - mid;
        }

        if (sot >= M)
            start = mid+1;
        else
            end = mid-1;
    }
    cout<<end<<endl;
}