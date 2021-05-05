#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    cin>>input;
    for(int i=0; i<input.length(); i++)
    {
        if(input[i]>='D' && input[i]<= 'Z')
            input[i] -= 3;
        else{
            input[i] = input[i] - 'A' + 'X';
        }
    }
    cout<<input;
}