#include<iostream>
#include<stack>
#include<string>

using namespace std;

void solution(string&, stack<char>&);

int main()
{
    string str, ans;
    stack<char> stk;
    cin>>str;

    for(auto c:str){
        switch(c)
        {
            case ')':
                solution(ans,stk);
                break;
            default:
                stk.push(c);
                break;
        }
    }
    while(!stk.empty()){
        ans += stk.top();
        stk.pop();
    }
}


void solution(string& sans, stack<char>& sstk)
{
    if(sstk.top() == '('){
        sstk.pop();
        for(int i=1; i < sstk.top()-'0'; i++)
            sans += sans;
        return;
    }
    else{
        sans += sstk.top();
        sstk.pop();
        solution(sans, sstk);
    }
}