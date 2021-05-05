#include <iostream>

using namespace std;

int main()
{
	int k;
	int numofA, numofB;

	cin >> k;
	numofA = 1;
	numofB = 0;
	for (int i = 0; i < k; i++) {
		int _numofA = 0;
		int _numofB = 0;
		_numofA = numofA;
		_numofB = numofB;

		numofB += _numofA;
		numofA = _numofB;
	}
	cout << numofA << " " << numofB;
}