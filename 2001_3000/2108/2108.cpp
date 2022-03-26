#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    vector<pair<int, int>> n_dict(8002);
    vector<int> n_list;
    int N;
    long long sum = 0;

    cin>>N;

    for(int i=-4000; i<4001; i++){
        n_dict[i+4000].first = i;
        n_dict[i+4000].second = 0; 
    }

    for(int i=0; i<N; i++){
        int n;
        cin>>n;
        n_dict[n+4000].second += 1;
        sum += n;
    }

    for(pair<int, int> item : n_dict) {
        for(int i=0; i<item.second; i++){
            n_list.push_back(item.first);
        }
    }

    sort(n_dict.begin(), n_dict.end(), [](pair<int, int> a,pair<int, int> b) -> bool
    {
        if(a.second == b.second){
            return a.first > b.first;
        }
        // 내림차순
        return a.second > b.second;
    });

    cout<<sum/N<<endl;
    cout<<n_list[n_list.size()/2]<<endl;
    if(n_dict[0].second == n_dict[1].second){
        cout<<n_dict[1].first;
    } else{
        cout<<n_dict[0].first;
    }
    cout<<n_list[n_list.size()-1]-n_list[0]<<endl;
    
    return 0;
}