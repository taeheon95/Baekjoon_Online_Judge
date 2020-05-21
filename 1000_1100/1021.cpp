#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    int n, m, at;
    cin>>n>>m;
    vector<int> location(m);
    list<int> an(n);
    for(int i=0; i<m; i++){
        cin>>location[i];
    }
    for(int i=0; i<n; i++){
        an.push_back(i+1);
    }
}