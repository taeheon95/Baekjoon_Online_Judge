#include<iostream>
#include<vector>

using namespace std;

int arrA[1000001];
int arrB[1000001];
int ans[2000002];

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    cin>>N>>M;
    for (int i = 0; i < N; i++){
        cin>>arrA[i];
    }
    for(int i = 0; i<M; i++){
        cin>>arrB[i];
    }
    int i = 0, j=0, k=0;
    while(i < N && j < M) {
        if(arrA[i] < arrB[j]){
            ans[k++] = arrA[i++];
        } else {
            ans[k++] = arrB[j++];
        }
    }
    while(i<N){
        ans[k++] = arrA[i++];
    }
    while(j<M){
        ans[k++] = arrB[j++];
    }

    for(int i=0; i<N+M; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}