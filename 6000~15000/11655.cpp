#include<iostream>
#include<string>

using namespace std;

int main()
{
    string in_str, out_str;
    getline(cin, in_str);
    for (auto i : in_str) {
        if (i <= 'Z' && i >= 'A') {
            if (i + 13 <= 'Z')
                out_str.push_back(i + 13);
            else
                out_str.push_back(i + 13 - 'Z' + 'A' -1);
        }
        else if (i <= 'z' && i >= 'a') {
            if (i + 13 <= 'z')
                out_str.push_back(i + 13);
            else
                out_str.push_back(i + 13 - 'Z' + 'A' -1);
        }
        else
            out_str.push_back(i);
    }
    cout << out_str << endl;
}