#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int remain=0;
    for(auto& i:str)
        remain = (remain*10 +(i-'0'))%20000303;
    cout<<remain;
}