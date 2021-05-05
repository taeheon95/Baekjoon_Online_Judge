#include<iostream>
#include<string>
#include<queue>
#include<stack>

using namespace std;

queue<char>ans;
stack<char>rev;

int main()
{
	string str_in, str_ans;
	int i = 0;

	getline(cin, str_in);

	while (i<str_in.length())
	{
		if (str_in[i] == '<') {
			while (str_in[i] != '>') {
				ans.push(str_in[i++]);
			}
			ans.push(str_in[i++]);
		}
		else {
			while (str_in[i] != ' ' && i<str_in.length()) {
				if (str_in[i] == '<')
					break;
				rev.push(str_in[i++]);
			}
			while (!rev.empty()) {
				ans.push(rev.top());
				rev.pop();
			}
			if(i<str_in.length() && str_in[i] != '<')
				ans.push(str_in[i++]);
		}
	}
	while (!ans.empty()) {
		str_ans.push_back(ans.front());
		ans.pop();
	}
	cout << str_ans << endl;
}