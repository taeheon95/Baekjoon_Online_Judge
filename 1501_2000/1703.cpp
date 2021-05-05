#include<iostream>

using namespace std;

int main(void) {
	int a;
	int split, cut, leaf = 0;
	auto split_leaf = [](int leaf, int split) {
		if (leaf == 0)
			leaf = split;
		else
			leaf *= split;
		return leaf;
	};
	auto cut_leaf = [](int leaf, int cut) {return leaf - cut;};
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> split >> cut;
		leaf = split_leaf(leaf, split);
		leaf = cut_leaf(leaf, cut);
	}
	cout << leaf << endl;
	leaf = 0;
	while (1) {
		cin >> a;
		for (int i = 0; i < a; i++) {
			cin >> split >> cut;
			leaf = split_leaf(leaf, split);
			leaf = cut_leaf(leaf, cut);
		}
		if (a == 0)
			break;
		cout << leaf << endl;
		leaf = 0;
	}
	return 0;
}