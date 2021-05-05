#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    int Min = 50;
    for(int i=0; i+x.length() <= y.length(); i++)
    {
        int cnt = 0;
        for(int j=0; j<x.length(); j++)
        {
            if(x[j] != y[i+j])
                cnt++;
        }
        Min = min(cnt, Min);
    }
    cout<<Min;
}