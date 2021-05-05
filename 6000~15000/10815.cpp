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
    cin>>N;
    vector<int>s_card(N);
    for(int i=0; i<N; i++)
        cin>>s_card[i];
    sort(s_card.begin(),s_card.end());
    cin>>M;
    vector<int>snot_card(M);
    for(int i=0; i<M; i++){
        int search;
        cin>>search;
        int start=0,end=s_card.size();
        while(start<=end){
            int mid = (start+end)/2;
            if(s_card[mid] == search){
                cout<<"1 ";
                break;
            }
            else if(s_card[mid] > search){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        if(start>end)
            cout<<"0 ";
    }
}