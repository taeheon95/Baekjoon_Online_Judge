#include<iostream>
#include<stack>

using namespace std;

int N;
stack<pair<int,int>>s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>N;
    for(int n=1; n<=N; n++){
        pair<int, int> temp;
        temp.first=n;
        cin>>temp.second;
        while(!s.empty()){
            if(s.top().second > temp.second){
                cout<<s.top().first<<" ";
                break;
            }
            s.pop();
        }
        if(s.empty()) 
            cout<<"0 ";
        s.push(temp);
    }
}