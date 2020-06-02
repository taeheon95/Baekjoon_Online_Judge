#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str, trans;
    bool error = true;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i]<= 'Z'){
            error = false;
            trans.push_back('_');
            trans.push_back(str[i]+32);
        }
        else if(str[i] == '_'){
            error = false;
            i+=1;
            trans.push_back(str[i]-32);
        }
        else
            trans.push_back(str[i]);
    }
    if(error == true)
        cout<<"\"Error!\"";
    else
        cout<<trans;
}