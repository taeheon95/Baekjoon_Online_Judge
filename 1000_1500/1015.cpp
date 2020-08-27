#include<iostream>
using namespace std;

int main()
{
    int N, *a, *nl, *p;
    cin>>N;
    a = new int[N];
    nl = new int[N];
    p =  new int[N];
    for(int i=0; i<N; i++){
        a[i] = i;
        cin>>nl[i];
    }
    for(int i=0; i<N; i++){
        p[i] = a[nl[i]-1];
        cout<<p[i]<<endl;
    }
}