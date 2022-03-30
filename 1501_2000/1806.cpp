#include<iostream>

using namespace std;

int arr[1000000] = {0,};

int main() {
    int N, ans = INT32_MAX; 
    long long S;
    cin>>N>>S;
    for (int i = 0; i <N; i++){
        cin>>arr[i];
    }
    int start = 0, end = 0;
    long long sum = 0;
    while(start<=end) {
        if(sum >= S) {
            ans = min(ans, end-start);
            sum -= arr[start++];
        } else if(end == N){
            break;
        } else {
            sum += arr[end++];
        }
    }
    if(ans == INT32_MAX){
        cout<<0;
    } else {
        cout<<ans;
    }

    return 0;
}