#include<iostream>

using namespace std;

const int max_n=101;

int N, E, ans = 0;
int com[max_n][max_n];
bool isinfected[max_n];

void dfs(int);

int main()
{
    cin>>N>>E;
    for(int i=0; i<E; i++){
        int x, y;
        cin>>x>>y;
        com[x][y] = 1;
        com[y][x] = 1;
    }
    dfs(1);
    cout<<ans-1<<endl;
}

void dfs(int v)
{
    ans++;
    isinfected[v] = true;

    for(int i=1; i<= N; i++){
        if(i==v)
            continue;
        if(com[v][i] == 1 && isinfected[i] == false){
            dfs(i);
        }
    }
}