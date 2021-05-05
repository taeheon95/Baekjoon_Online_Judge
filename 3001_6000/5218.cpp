#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t = 0; t<T; t++)
    {
        string x, y;
        cin>>x>>y;
        cout<<"Distances:";
        for(int i=0; i<x.length(); i++)
        {
            int output = y[i] >= x[i] ? y[i] - x[i] : y[i]+26 -x[i];
            cout<<" "<<output;
        }
        cout<<endl;
    }
}