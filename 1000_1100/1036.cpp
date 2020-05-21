#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

pair<string, char> cha[36];

string multiply(string& u, string& v)
{
    string result(max(u.size(), v.size()), '0');
    for(int i=0; i<result.size(); i++)
    {
        string line(u);
        int carry = 0;
        for(int j= u.size()-1; j>=0; j--){
            int temp = carry;
            carry = 0;
            temp += (u[j] - '0') * (v[v.size()-1-i] - '0');
            if(temp >= 10)
            {
                carry = temp /10;
                temp %= 10;
            }
            line[j] = temp + '0';
        }
        if(carry > 0)
            line.insert(line.begin(), carry + '0');
        line += string(i, '0');
        result = add(result, line);
    }
}

string add(string&u, string& v)
{
    string result(max(u.size(), v.size()), '0');
    bool carry = false;
    for(int i=0; i<result.size(); i++)
    {
        int temp = carry;
        carry = false;
        if(i < u.size())
            temp += u[u.size()-1-i] - '0';
        if(i < v.size())
            temp += v[v.size()-1-i] - '0';

        if(temp>=10){
            carry = true;
            temp -= 10;
        }
        result[result.size() - i -1] = temp + '0';
    }
    if(carry)
        result.insert(result.begin(), '1');
    return result;
}

int main()
{
    int N;
    cin>>N;
    string* str= new string[N];
    for(int i=0; i< N; i++)
        cin>>str[i];
    for(int i=0; i< 36; i++)
    {
        if(0<=i && i<10)
            cha[i].second = i+'0';
        else
            cha[i].second = i-10 + 'A';
    }
    for(int i=0; i< N; i++)
    {
        for(int j=0; j<str[i].length(); j++)
        {
            if(str[i][j] >= '0' && )
        }
    }
}