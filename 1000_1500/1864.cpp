#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    string str_in;
    while(true){
        long long num= 0;
        cin>>str_in;
        if(str_in == "#")
            break;
        for(int i=str_in.length()-1; i>=0; i--){
            int tmp = 0;
            switch(str_in[i]){
                case '-':
                    tmp=0;break;
                case '\\':
                    tmp=1;break;
                case '(':
                    tmp=2;break;
                case '@':
                    tmp=3;break;
                case '?':
                    tmp=4;break;
                case '>':
                    tmp=5;break;
                case '&':
                    tmp=6;break;
                case '%':
                    tmp=7;break;
                case '/':
                    tmp=-1;break;
            }
            num += tmp*pow(8,str_in.length()-i-1);
        }
        cout<<num<<endl;
    }
}