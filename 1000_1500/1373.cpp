#include<iostream>
#include<string>
using namespace std;
int main()
{
    string bin, oct;
    int digit = 0;
    cin>>bin;
    for(int i=0; i<bin.length(); i++) {
        int p = 1;
        for(int j=0; j<i; j++){
            p *= 2;
        }
        digit += p*(bin[bin.length()-1]-'0');
    }
}