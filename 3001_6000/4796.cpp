#include<iostream>

using namespace std;

int main()
{
    int L, P, V, c=1;
    cin>>L>>P>>V;
    while(L != 0 && P != 0 && V != 0){
        int days = (V/P)*L+min(V%P, L);
        cout<<"Case "<<c<<": "<<days<<"\n";
        cin>>L>>P>>V;
        c++;
    }
}