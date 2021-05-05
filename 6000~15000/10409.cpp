#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N,t;
    int sum = 0;
    cin>>N>>t;
    vector<int>n(N);
    for(auto&i:n)
        cin>>i;
    int i=0;
    for(i; i<N; i++){
        if(sum + n[i] > t)
            break;
        else sum += n[i];
    }
    cout<<i<<endl;
}