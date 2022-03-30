#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, target;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    cin>>target;
    sort(arr.begin(), arr.end());

    int start=0, end = N-1, cnt=0;
    while(start < end) {
        int sum = arr[start] + arr[end];
        if(sum ==target) {
            cnt++;
            start++;
            end--; 
        } else if(sum < target) {
            start++;
        } else
            end--;
    }
    cout<<cnt;
    return 0;
}