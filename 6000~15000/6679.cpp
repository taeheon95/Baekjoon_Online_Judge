#include<iostream>

using namespace std;

int main()
{
    for(int i=1000; i<10000; i++)
    {
        int s10, s12, s16;
        s10=0,s12=0,s16=0;
        int j = i;
        while(j != 0){
            s10 += j%10;
            j = j/10;
        }
        j=i;
        while(j != 0){
            s12 += j%12;
            j = j/12;
        }
        j=i;
        while(j != 0){
            s16 += j%16;
            j = j/16;
        }
        if(s10 == s12 && s12 == s16)
            cout<<i<<endl;
    }
}