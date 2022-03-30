#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin>>N;
    vector<bool> is_prime_num;
    vector<int> primeNums;

    is_prime_num.resize(N+1, true);

    for(int i=2; i*i<=N;i++){
        if(is_prime_num[i] == true) {
            for(int j=i*2; j<=N; j+=i) {
                is_prime_num[j] = false;
            }
        }
    }
    for(int i=2; i<=N; i++){
        if(is_prime_num[i]){
            primeNums.push_back(i);
        }
    }

    int start = 0, end = 0, sum = 0, ans = 0;
    while(start<=end) {
        if(sum >= N) sum -= primeNums[start++];
        else if(end == primeNums.size()) break;
        else sum += primeNums[end++];
        if(sum == N) ans++;
    }

    cout<<ans;

    return 0;
}