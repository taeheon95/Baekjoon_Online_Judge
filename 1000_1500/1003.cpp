#include<iostream>
using namespace std;
int n[41];
pair<int,int>fi[42];
int main()
{
    int T, temps=0;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>n[i];
        if(n[i]>temps) temps = n[i];
    }
    fi[0].first=1,fi[0].second=0;
    fi[1].first=0,fi[1].second=1;
    if(temps>2){
        for(int i=0; i<temps; i++){
            fi[i+2].first=fi[i+1].first+fi[i].first;
            fi[i+2].second=fi[i+1].second+fi[i].second;
        }
    }
    for(int i=0; i<T; i++)
        cout<<fi[n[i]].first<<" "<<fi[n[i]].second<<endl;
}