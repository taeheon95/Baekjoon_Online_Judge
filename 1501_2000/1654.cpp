#include<iostream>
#include<algorithm>
using namespace std;

long long K, N;
long long k[10001] = { 0 };
int main()
{
	long long high=0, low;
	long long mid=0;
	long long sumN = 0;
	int ans = 0;
	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		cin >> k[i];
		high = max(high, k[i]);
	}
	low = 1;
	while (high>=low) {
		mid = (high + low)/2;
		sumN = 0;
		for (int i = 0; i < K; i++)
			sumN += k[i] / mid;

		if (sumN >= N) {
			low = mid + 1;
			if (mid > ans)
				ans = mid;
		}
		else
			high = mid-1;
	}
	cout << ans << endl;
}