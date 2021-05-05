#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int inbus = 0, mbus=0;
	pair<int, int>man;
	for (int i = 0; i < 4; i++) {
		cin >> man.first >> man.second;
		inbus += man.second - man.first;
		mbus = max(inbus, mbus);
	}
	cout << mbus << endl;
}