#include<iostream>
#include<queue>
using namespace std;
long long dp[1024] = {0};

long long sol(int N) {
    queue<long long>q;
    for (int i = 0; i < 10; i++) {
        q.push(i);
        dp[i] = i;
    }
    int idx = 10;
    while (idx <= N && !q.empty()) {
        long long temp = q.front();
        q.pop();

        int last = temp % 10;
        for (int i = 0; i < last; i++) {
            q.push(temp * 10 + i);
            dp[idx++] = temp * 10 + i;
        }
    }

    return dp[N];
}

int main() {
    int N;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    if (N >= 1023) {
        cout << -1;
        return 0;
    }
    if (N < 10) {
        cout << N;
        return 0;
    }
    cout << sol(N);
    return 0;
}