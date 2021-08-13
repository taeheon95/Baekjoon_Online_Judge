#include<iostream>

using namespace std;

int num[10001] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        num[temp]++;
    }
    for(int i=1; i<10001; i++){
        for(int j=0; j<num[i];j++){
            cout<<i<<"\n";
        }
    }
}