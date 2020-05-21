#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    cin>>input;
    int cur = 0;
    cout<<input[0];
    while(input.find('-', cur) != string::npos)
    {
        cur = input.find('-', cur);
        cout<<input[++cur];
    }
}