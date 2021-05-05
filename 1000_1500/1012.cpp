#include<iostream>

using namespace std;

const int max_n=50;
int T, M, N, K;
int field[max_n][max_n];

int main()
{
    cin>>T;
    for(int t=0; t<T; t++){
        cin>>M>>N>>K;
        for(int i=0; i<K; i++){
            int x, y;
            cin>>x>>y;
            field[x][y] = 1;
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                field[i][j] = 0;
            }
        }
    }
}