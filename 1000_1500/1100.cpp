#include<iostream>
#include<string>

using namespace std;

string chessboard[] ={
    "wbwbwbwb",
    "bwbwbwbw",
    "wbwbwbwb",
    "bwbwbwbw",
    "wbwbwbwb",
    "bwbwbwbw",
    "wbwbwbwb",
    "bwbwbwbw"
};

int main()
{
    int cnt = 0;
    for(int i =0; i<8; i++)
    {
        string line;
        cin>>line;
        for(int j = 0; j<8; j++)
        {
            if(chessboard[i][j] == 'w' && line[j] == 'F')
                cnt++;
        }
    }
    cout<<cnt;
}