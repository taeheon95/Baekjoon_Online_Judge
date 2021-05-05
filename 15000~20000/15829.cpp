#include<iostream>
#include<string>

using namespace std;

const int M = 1234567891;
const int r = 31;

int main()
{
	int L;
	long long ans = 0;
	long long R = 1;
	string num;
	cin >> L >> num;
	for (int i = 0; i < num.length(); i++) {
		ans = (ans + (num[i] - 'a' + 1) * R) % M;
		R *= r; R %= M;
	}
	cout << ans;
}