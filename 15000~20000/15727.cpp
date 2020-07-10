#include<iostream>
using namespace std;
int main()
{
    int l, a=0;
    cin>>l;
    a=(l>5)? (l%5==0)? l/5:l/5+1 : 1;
    cout<<a; 
}