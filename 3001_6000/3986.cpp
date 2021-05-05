#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string input;
    int output = 0;
    for(int n = 0; n<N; n++)
    {
        stack<char> s;
        cin>>input;
        for(auto &i:input)
        {
            if(s.empty() || s.top() != i)
                s.push(i);
            else
                s.pop();
        }
        if(s.empty()) output++;
    }
    cout<<output<<endl;
}