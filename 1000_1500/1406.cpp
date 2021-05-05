#include<stack>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str, result="";
	stack<char> s1, s2;
	int n;
	cin >> str;
	cin >> n;
	for (const char& cha : str) s1.push(cha);
	for (int i = 0; i <= n; i++)
	{
		string temp;
		getline(cin, temp);
		if (temp[0] == 'P') s1.push(temp[2]);
		else if (temp[0] == 'L') {
			if (!s1.empty()) { s2.push(s1.top()); s1.pop(); }}
		else if (temp[0] == 'D') {
			if (!s2.empty()) { s1.push(s2.top()); s2.pop(); }}
		else if (temp[0] == 'B')
			if (!s1.empty()) s1.pop();
	}
	while (!s1.empty()){
		s2.push(s1.top()); s1.pop();
    }
	while (!s2.empty()) {
		result += s2.top();
		s2.pop();
	}
	cout << result << endl;
}