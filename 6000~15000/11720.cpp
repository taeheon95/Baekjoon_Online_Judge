#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    char str[101];
    int s = 0;
    cin>>str;
    for(int i=0; i<N; i++){
        s += str[i] - '0';
    }
    cout<<s;
}