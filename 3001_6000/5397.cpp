#include<stack>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, res = "";
    stack<char> s1, s2;
    int N;
    cin>>N;
    for(int n=0; n<N; n++)
    {
        cin>>str;
        for(auto& i: str){
            if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0'  && i <= '9'))
                s1.push(i);
            else if(i == '<' && !s1.empty()) s2.push(s1.top()), s1.pop();
            else if(i == '>' && !s2.empty()) s1.push(s2.top()), s2.pop();
            else if(i == '-' && !s1.empty()) s1.pop();
        }

        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty()){
            cout<<s2.top();
            s2.pop();
        }
        cout<<endl;
    }
}