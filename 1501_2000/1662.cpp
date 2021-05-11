#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

string instr;
bool isVisited[51];

int dfs(string&s, int idx){
    int cnt = 0;
    for(int i=idx; i<s.length(); i++){
        if(s[i] == '(' && !isVisited[i]){
            isVisited[i] = true;
            int num = s[i-1] -'0';
            cnt--;
            cnt += num *dfs(s, i+1);
        }
        else if (s[i] == ')' && !isVisited[i]) {
            isVisited[i] = true;
            return cnt;
        }
        else if(!isVisited[i]){
            isVisited[i] = true;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    cin>>instr;
    cout<<dfs(instr, 0);
}