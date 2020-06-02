#include<iostream>
#include<stack>

using namespace std;
stack<int>s[6];

int main()
{
    int N, P;
    int num = 0;
    cin>>N>>P;
    for(int n=0; n<N; n++){
        int a,b;
        cin>>a>>b;
        if(s[a-1].empty()){
            s[a-1].push(b);
            num++;
        }
        else{
            for(; !s[a-1].empty() && s[a-1].top() > b; s[a-1].pop())
                num++;
            if(!s[a-1].empty()){
                if(s[a-1].top() != b){
                    s[a-1].push(b);
                    num++;
                }
            }
            else
            {
                s[a-1].push(b);
                num++;
            }
            
        }
    }
    cout<<num<<endl;
}