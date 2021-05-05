#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string ans;
	stack<char> stk;
	int N, B;
	cin >> N >> B;
	while (N) {
		int rem, div;
		div = N / B;
		rem = N % B;
		if (rem >= 10) {
			stk.push(rem + 'A' - 10);
		}
		else {
			stk.push(rem + '0');
		}
		N = div;
	}
	while (!stk.empty()) {
		ans.push_back(stk.top());
		stk.pop();
	}
	cout << ans;
}