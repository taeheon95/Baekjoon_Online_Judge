#include<iostream>
#include<string>

using namespace std;

int main()
{
    int cnt = 0;
    string line[8];
    for(int i =0; i<8; i++)
        cin>>line[i];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if((i+j)%2 == 0 && line[i][j]== 'F')
                cnt++;
        }
    }
    cout<<cnt;
}