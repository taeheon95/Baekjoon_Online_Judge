#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N, feel;
    cin>>N;
    string* str=new string[N];
    for(int n=0; n<N; n++)
        cin>>str[n];
    cin>>feel;
    if(feel == 1)
        for(int i=0; i<N; i++)
            cout<<str[i]<<endl;
    else if(feel == 2){
        for(int i=0; i<N; i++){
            for(int j=str[i].size()-1; j>=0; j--)
                cout<<str[i][j];
            cout<<endl;
        }
    }
    else if(feel == 3){
        for(int i=N-1; i>=0; i--)
            cout<<str[i]<<endl;
    }
}