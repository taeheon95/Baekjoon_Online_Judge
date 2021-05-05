#include<iostream>
using namespace std;
int main()
{
    int N,F, n;
    cin>>N>>F;
    n=N/100;
    for(int i=0; i<100; i++){
        if ((n*100+i)%F == 0){
            if(i<10) cout<<'0'<<i<<endl;
            else cout<<i<<endl;
            break;
        }
    }
}