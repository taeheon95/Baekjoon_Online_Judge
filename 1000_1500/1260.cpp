#include<iostream>
#include<queue>
#include<stack>
#include<vector>

using namespace std;

const int max_n=1001;

int N;
int arr[max_n][max_n];
bool isvisited[max_n];
int M;
int V;
vector<int> s_ans;
vector<int> q_ans;
queue<int> q;

void dfs(int);
void bfs(int);

int main()
{
    int x, y;
    cin>>N>>M>>V;
    for(int i=0; i<M; i++){
        cin>>x>>y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(V);
    for(int i=1; i<=N; i++)
        isvisited[i] = false;
    bfs(V);
    for(auto i: s_ans)
        cout<<i<<" ";
    cout<<endl;
    for(auto i: q_ans)
        cout<<i<<" ";
    cout<<endl;
}

void dfs(int v)
{
    s_ans.push_back(v);
    isvisited[v] = true;

    for(int i=1; i<= N; i++){
        if(i==v)
            continue;
        if(arr[v][i] == 1 && isvisited[i] == false){
            dfs(i);
        }
    }
}

void bfs(int v)
{
    q.push(v);
    isvisited[v] = true;
    while(!q.empty()){
        for(int i=1; i<=N; i++){
            if(i==q.front())
                continue;
            if(arr[q.front()][i] == 1 && isvisited[i] == false){
                isvisited[i] = true;
                q.push(i);
            }
        }
        q_ans.push_back(q.front());
        q.pop();
    }
}