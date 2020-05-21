#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    int cnt = 0;
    cin>>input;
    for(auto& i: input)
    {
        switch(i)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cnt++;
        }
    }
    cout<<cnt;
}