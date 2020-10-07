#include<iostream>
#include<string>
using namespace std;
int position[26] ={-1};
string s;
int main(void)
{
    cin>>s;
    for(int i=0; i<26; i++)
    {
        position[i] = -1;
    }
    for(int i=0; i<s.length(); i++)
    {
        if(position[s[i]-'a'] == -1){
            position[s[i]-'a'] = i;
        }
    }
    for(int i=0; i<26; i++)
    {
        cout<<position[i]<<" ";
    }
}