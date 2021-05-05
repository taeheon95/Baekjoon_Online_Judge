#include<iostream>
#include<string>
using namespace std;
int cnt[26] = {0};
int main()
{
    string input;
    cin>>input;
    for(auto& i: input)
        cnt[i-'a']++;
    for(auto& i: cnt)
        cout<<i<<' ';
}