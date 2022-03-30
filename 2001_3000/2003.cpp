#include<iostream>

using namespace std;

int arr[10000] = {0,};

int main() {
    int N, ans = 0; 
    long long S;
    cin>>N>>S;
    for (int i = 0; i <N; i++){
        cin>>arr[i];
    }
    int start = 0, end = 0;
    long long sum = 0;
    while(end<=N) {
        if(sum >= S) {
            sum -= arr[start++];
        } else {
            sum += arr[end++];
        }
        if(sum == S){
            ans++;
        }
    }

    std::cout<<ans;

    return 0;
}