#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;
    int* t = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> t[i];
    }
    sort(t, t + N);
    int cnt = 2;
    for (int i = N-1; i >=0; i--) {
        ans = max(ans, cnt + t[i]);
        cnt++;
    }
    cout << ans;
}