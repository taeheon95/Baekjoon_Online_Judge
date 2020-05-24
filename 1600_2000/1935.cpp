#include<iostream>
#include<string>
#include<stack>

using namespace std;

stack<double>s;
int alpha[26] ={0};

int main()
{
    int N;
    string in;
    cin>>N;
    cin>>in;
    for(int i=0; i<N; i++)
        cin>>alpha[i];
    
    for(auto& i:in)
    {
        double a = 0, b = 0;
        if(i <= 'Z' && i >= 'A')
            s.push(alpha[i-'A']);
        else{
            b = s.top(), s.pop();
            a = s.top(), s.pop();
            if(i == '*')
                a *= b;
            if(i == '+')
                a += b;
            if(i == '-')
                a -= b;
            if(i == '/')
                a /= b;
            s.push(a);
        }
    }
    printf("%.2lf\n", s.top());
}