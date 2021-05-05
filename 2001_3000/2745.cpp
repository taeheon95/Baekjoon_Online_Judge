#include<iostream>
#include<string>

using namespace std;

int main()
{
	string N;
	int B, ans=0;
	cin >> N >> B;
	for (int i = N.length() - 1; i >= 0; i--) {
		int tmp = 1;
		if (N[i] <= 'Z' && N[i] >= 'A')
			tmp *= (N[i] - 'A' + 10);
		else {
			tmp *= (N[i] - '0');
		}			
		for (int j = N.length() - 1; j >= i+1; j--)
			tmp *= B;
		ans += tmp;
	}
	cout << ans;
}