#include<iostream>
#include<string>

using namespace std;

int main()
{
    int zeroCnt = 0, oneCnt = 0, i;
    char bef, cur;
    string s;
    cin >> s;
    bef = s[0];
    if (bef == '0')
        zeroCnt++;
    else oneCnt++;
    for (i = 1; i < s.length(); bef = s[i++]) {
        cur = s[i];
        if (bef != cur) {
            if (cur == '0') zeroCnt++;
            else oneCnt++;
        }
    }
    cout << min(zeroCnt, oneCnt);
}