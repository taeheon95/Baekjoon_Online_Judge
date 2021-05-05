#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str, boob;
    cin>>str>>boob;
    while(str.find(boob) != string::npos)
    {
        int index = str.find(boob);
        str.erase(index, boob.length());
    }
    if(str.length() == 0)
        cout<<"FRULA";
    else
        cout<<str;
}