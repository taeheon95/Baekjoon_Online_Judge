#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int A, B, digit = 0;
	int m;
	cin >> A >> B >> m;
	vector<int>num(m), ans;
	for (int i = 0; i < m; i++) {
		cin >> num[i];
	}
	for (int i = m - 1; i >= 0; i--) {
		int tmp = 0;
		tmp += num[i];
		for (int j = m - 1; j >= i + 1; j--) {
			tmp *= A;
		}
		digit += tmp;
	}

	while (digit) {
		int div, rem;
		div = digit / B;
		rem = digit % B;
		ans.push_back(rem);
		digit = div;
	}
	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i] << " ";
	cout << endl;
}