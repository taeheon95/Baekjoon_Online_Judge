#include<iostream>

using namespace std;

int arr[5];

int main(){
    int minNum = 100;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        minNum = min(arr[i], minNum);
    }
    for(int i=minNum; i<INT32_MAX; i++){
        int cnt = 0;
        for(int j=0; j<5; j++) {
            if(i%arr[j]==0){
                cnt++;
            }
        }
        if(cnt >= 3){
            cout<<i;
            break;
        }
    }
    return 0;
}