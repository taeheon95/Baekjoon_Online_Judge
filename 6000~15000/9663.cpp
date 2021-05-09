#include<iostream>
using namespace std;
int cnt = 0;
int n;
int board[16];

bool promising(int idx){
    for(int i=0; i<idx; i++)
        if(board[idx] == board[i] || abs(board[idx]-board[i]) == idx-i)
            return false;
    return true;
}

void queens(int idx){
    if(idx == n)
        cnt++;
    else{
        for(int i=0; i<n; i++){
            board[idx] = i;
            if(promising(idx))
                queens(idx+1);
        }
    }
}

int main(){
    cin>>n;
    queens(0);
    cout<<cnt;
}