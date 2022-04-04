#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, K, tempSum = 0;
    cin>>N>>K;
    vector<int> arr(N);
    for(int i=0; i<N; i++) {
        cin>>arr[i];
        if(i < K){
            tempSum += arr[i];
        }
    }
    int maxSum = tempSum, start=0, end = K;
    while(end < N) {
        tempSum -= arr[start];
        tempSum += arr[end];
        maxSum = max(tempSum, maxSum);
        start++;
        end++;
    }
    cout<<maxSum;

    return 0;
}