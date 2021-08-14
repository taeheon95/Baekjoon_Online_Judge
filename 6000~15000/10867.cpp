#include<iostream>
#include<set>

using namespace std;

int main() {
    int n,i,temp;
    set<int> s;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>temp;
        s.insert(temp);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
}