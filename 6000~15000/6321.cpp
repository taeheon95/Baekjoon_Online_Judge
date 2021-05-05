#include<iostream>
#include<string>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string str;
    for(int n=0; n<N; n++)
    {
        cin>>str;
        cout<<"String #"<<n+1<<endl;
        for(auto i:str){
            if(i != 'Z')
                printf("%c", i+1);
            else
                cout<<"A";
        }
        cout<<endl<<endl;
    }
}