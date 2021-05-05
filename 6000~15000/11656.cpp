#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string> slist;
    for(int i=0; i<s.size(); i++)
        slist.push_back(s.substr(i));
    sort(slist.begin(), slist.end());
    for(auto& i: slist)
        cout<<i<<endl;
}