#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int> sn;
    for(int i=0; i<n; i++){
        cin>>a;
        sn.push_back(a);
    }
    sort(sn.begin(), sn.end());
    cout<<sn.front()*sn.back()<<endl;
}