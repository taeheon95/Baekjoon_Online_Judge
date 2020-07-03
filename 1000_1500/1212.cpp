#include<iostream>
#include<string>
using namespace std;
int otb[]={0,1,10,11,100,101,110,111};
int main()
{
    string o;
    cin>>o;
    printf("%d",otb[o[0]-'0']);
    for(int i=1; i<o.length(); i++){
        printf("%03d", otb[o[i]-'0']);
    }
}