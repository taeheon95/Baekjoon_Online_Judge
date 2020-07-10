#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    queue<string> q;
    string str;
    cin>>n;
    for(int i = 0; i< n; i++)
    {
        getline(cin, str);
        if(str.find("push") == 0)
        {
            q.push(str.substr(5));
        }
        else if(str == "pop")
        {
            if(q.empty) cout<<"-1\n";
            else {cout<<q.front()<<endl; q.pop();}
        }
        else if(str == "size")
            cout<<q.size()<<endl;
        else if(str == "empty")
            cout<<q.empty()<<endl;
        else if(str == "front")
        {
            if(q.empty()) cout<<"-1\n";
            else cout<<q.front()<<endl;
        }
        else if(str == "back")
        {
            if(q.empty()) cout<<"-1\n";
            else cout<<q.back()<<endl;
        }
    }
}