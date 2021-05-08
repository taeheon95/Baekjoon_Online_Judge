#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool cmp(pair<int, int> f, pair<int, int> s){
    if(f.second == s.second)
        return f.first < s.first;
    else
        return f.second < s.second;
}

int main(){
    
    int N;
    cin>>N;
    
    vector<pair<int, int>> conferences(N);
    for(pair<int, int> &conference:conferences){
        cin>>conference.first>>conference.second;
    }
    sort(conferences.begin(), conferences.end(), cmp);

    int cnt = 0;
    int n = 0;

    for (auto conference : conferences){
        if(n <= conference.first){
            n = conference.second;
            cnt++;
        }
    }

    cout<<cnt;
}