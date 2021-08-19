#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void pick(int m, vector<int>& picked, int topick);
void printPicked(vector<int>& picked);

void pick(int n, vector<int>& picked, int topick)
{
    if(topick == 0) {printPicked(picked); return;}
    
    int smallest = picked.empty() ? 0:picked.back() +1;

    for(int next=smallest; next<n; ++next) {
        picked.push_back(next);
        pick(n, picked, topick-1);
        picked.pop_back();
    }
}

void printPicked(vector<int>& picked)
{
    for(int i=0; i<picked.size(); i++) {
        cout<<picked[i]+1<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> picked;
    pick(n,picked,m);
}