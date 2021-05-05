/*
이 문제는 스택을 이용하여 푼다
스택에는 나오는 횟수가 적은 순서대로 들어간다.
*/
#include<iostream>
#include<stack>

using namespace std;

int an[1000001];
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
		an[num[i]]++;
	}
	an[0] = 1e9 + 7;
	stk.push(0);
	for (int i = N-1; i >= 0; i--) {
		while (an[stk.top()] <= an[num[i]]) stk.pop();
		if (an[stk.top()] > 1e9) ans[i] = -1;
		else ans[i] = stk.top();
		stk.push(num[i]);
	}
	for (int i = 0; i < N; i++)
	{
		cout << ans[i]<<" ";
	}
}