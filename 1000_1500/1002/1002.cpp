#include<iostream>
using namespace std;
int main()
{
    int n;
    int d;
    int add, sub;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        add = (r1+r2)*(r1+r2);
        sub = (r1-r2)*(r1-r2);
        if(d==0)
        {
            if(r1==r2) 
                cout<<-1;
            else 
                cout<<0;            
        }
        else if(add < d || sub > d)
            cout<<0;
        else if(add == d || sub == d) 
            cout<<1;
        else cout<<2;
        cout<<endl;
    }
}