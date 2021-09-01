#include <iostream>
#include <vector>

using namespace std;

int arr[1001] = {0};

int main(void)
{
	int C, N;
	cin >> C >> N;
	vector<pair<int, int> > citys(N);
	auto calMinMoney = [](pair<int, int> city, int numOfPeople)
	{
		return numOfPeople / city.second * city.first + arr[numOfPeople % city.second];
	};

	for (auto &city : citys)
	{
		cin >> city.first >> city.second;
	}

	for (int c = 1; c <= C; c++)
	{
		int minmoney = 1000000;
		arr[c] = arr[c - 1] + arr[1];
		for (auto city : citys)
		{
			if (city.second > c)
				continue;
			minmoney = (calMinMoney(city, c) < minmoney) ? calMinMoney(city, c) : minmoney;
		}
		if (arr[c - 1] == 0)
		{
			arr[c] = minmoney;
		}
		else
		{
			arr[c] = (arr[c - 1] + arr[1] < minmoney) ? arr[c - 1] + arr[1] : minmoney;
		}
	}

	cout << arr[C] << endl;
}
