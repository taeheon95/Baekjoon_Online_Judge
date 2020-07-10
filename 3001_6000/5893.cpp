#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n, ans;
    cin>>n;
    ans=n+"0000";
    for(int i=n.length()-1, j=ans.length()-1; i>=0; i--, j--)
    {
        if(ans[i]=='1'&&n[j]=='1'){
            ans[i-1]
        }
    }
}