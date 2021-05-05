#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    cin>>input;
    int i, j, output = 1;
    i = 0; j = input.length()-1;
    while(i != j)
    {
        if(input[i++] != input[j--])
        {
            output=0;
            break;
        }
        else if(i == input.size()/2)
            break;
    }
    cout<<output;
}