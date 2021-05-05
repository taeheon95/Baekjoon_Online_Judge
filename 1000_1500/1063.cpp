#include<iostream>
#include<string>
using namespace std;
int chess[8][8]={0};
int main()
{
    pair<int,int>bindex,index;
    int N;
    string king, stone, moving;
    cin>>king>>stone>>N;
    index.first = king[1]-'1';
    index.second = king[0]-'A';
    chess[index.first][index.second]=1;
    chess[stone[1]-'1'][stone[0]-'A']=2;
    for(int n=0; n<N; n++)
    {
        cin>>moving;
        for(auto& i: moving)
        {

        }
    }
}