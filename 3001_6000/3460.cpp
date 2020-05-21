#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin>>n;
        for(int i=0; i < 30; i++)
        {
            if((1<<i) & n)
                cout<<i<<" ";
        }
    }
}