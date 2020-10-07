#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
#include<string>

#define MAX_SIZE 25

using namespace std;

int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };

int N;
int group_id = 0;
int groups[MAX_SIZE * MAX_SIZE];

string n[MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

void dfs_recursion(int x, int y);
void dfs_stack(int x, int y);
void bfs(int x, int y);

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (n[i][j] == '1' && visited[i][j] == false) {
				group_id++;
				dfs_recursion(i, j);
			}
		}
	}
	sort(groups + 1, groups + group_id + 1);
	printf("%d\n", group_id);
	for (int i = 1; i <= group_id; i++) {
		printf("%d\n", groups[i]);
	}
}

void dfs_recursion(int x, int y)
{
	visited[x][y] = true;
	
	groups[group_id]++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (0 <= nx && nx < N && 0 <= ny && ny < N) {
			if (n[nx][ny] == '1' && visited[nx][ny] == false) {
				dfs_recursion(nx, ny);
			}
		}
	}
}

void dfs_stack(int x, int y)
{
	stack<pair<int, int>> s;
	s.push(make_pair(x, y));

	visited[x][y] = true;
	groups[group_id]++;

	while (!s.empty()) 
	{
		x = s.top().first;
		y = s.top().second;
		s.pop();

        for(int i=0; i<4; i++)
		{
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(0<=nx&& nx<N && 0<=ny&& ny<N)
			{
                if(n[nx][ny] == 1 && visited[nx][ny] == false)
				{
                    visited[nx][ny] = true;

                    groups[group_id]++;

                    s.push(make_pair(x,y));
                    s.push(make_pair(nx,ny));
                }
            }
        }
	}
}

void bfs(int x, int y){

    queue< pair<int,int> > q; // 이용할 큐, (x,y) -> (행, 열)
    q.push(make_pair(x,y)); // pair를 만들어서 queue에 넣습니다.

    // 처음 x,y를 방문 했기때문에
    visited[x][y] = true;
    groups[group_id]++;  

    while(!q.empty()){

        // 큐의 현재 원소를 꺼내기
        x = q.front().first;
        y = q.front().second;
        q.pop();

        // 해당 위치의 주변을 확인
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 지도를 벗어나지 않고
            if(0 <= nx && nx < N && 0 <= ny && ny < N){
                // 집이면서 방문하지 않았다면 -> 방문
                if(n[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny]=true;

                    // 해당 단지의 집의 수를 증가시킴
                    groups[group_id]++;

                    // 큐에 현재 nx,ny를 추가
                    q.push(make_pair(nx,ny));   
                }
            }
        }
    }
}