#include <iostream>
#include <string>

using namespace std;

int main() {
	int T, R;
	string s;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> s;
		for (auto& cha : s) {
			for (int j = 0; j < R; j++) {
				cout << cha;
			}
		}
		cout << endl;
	}
}