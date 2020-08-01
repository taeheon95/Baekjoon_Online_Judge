#include<iostream>
#include<stack>

using namespace std;

stack<int>stk;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	int* num, * ans;
	num = new int[N];
	ans = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	stk.push(1e9 + 7);
	for (int i = N - 1; i >= 0; i--) {
		while (stk.top() <= num[i]) stk.pop();
		if (stk.top() > 1e9) ans[i] = -1;
		else ans[i] = stk.top();
		stk.push(num[i]);
	}
	for (int i = 0; i < N; i++)
		cout << ans[i] << " ";
}